#include <stdlib.h>
#include <stdio.h>


struct dugum {
    int x;
    struct dugum* sol;
    struct dugum* sag;
};

struct dugum* dugumOlustur(int x) {
    struct dugum* yeni_dugum = (struct dugum*)malloc(sizeof(struct dugum));
    
    yeni_dugum->x = x;
    yeni_dugum->sag = NULL;
    yeni_dugum->sol = NULL;
    
    return yeni_dugum;
}

struct dugum* dugumEkle(struct dugum* kok, int x) {
    if (kok == NULL) {
        kok = dugumOlustur(x);
    } else if (x < kok->x) {
        kok->sol = dugumEkle(kok->sol, x);
    } else {
        kok->sag = dugumEkle(kok->sag, x);
    }
    return kok;
}

void ortalamadanBuyuk(struct dugum* kok, double ortalama) {
    if (kok != NULL) {
        ortalamadanBuyuk(kok->sol, ortalama);
        if (kok->x > ortalama) {
            printf("%d ", kok->x);
        }
        ortalamadanBuyuk(kok->sag, ortalama);
    }
}

void inOrder(struct dugum* kok) {
    if (kok != NULL) {
        inOrder(kok->sol);
        printf("%d ", kok->x);
        inOrder(kok->sag);
    }
}

void toplamiHesapla(struct dugum* kok, int* toplam, int* count) {
    if (kok != NULL) {
        (*count)++;
        *toplam += kok->x;
        toplamiHesapla(kok->sol, toplam, count);
        toplamiHesapla(kok->sag, toplam, count);
    }
}


int main() {
    struct dugum* kok = NULL;
    int n; 

    printf("Kac sayi olacak : ");
    scanf("%d", &n);

    int sayac=0;

    int x;
    while(sayac < n) {
        printf("Eleman %d : ",sayac+1);
        scanf("%d", &x);

        kok = dugumEkle(kok, x);
        
        sayac++;
    }

    printf("Agacin elemanlari (kucukten buyuge) : ");
    inOrder(kok);
    printf("\n");

    int count = 0;
    int toplam = 0;
    toplamiHesapla(kok, &toplam, &count);

    double ortalama = (double)toplam / count;
    printf("Agacin ortalamasi: %.2f\n", ortalama);

    printf("Ortalamadan buyuk elemanlar : ");
    ortalamadanBuyuk(kok, ortalama);

    return 0;
}
