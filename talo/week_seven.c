#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Öğrenci bilgilerini tutmak için bir yapı
struct Ogrenci {
    int OgrenciNo;
    char Ad[50];
    int Vize;
    int Final;
    float Ortalama;
    int Rakam;
    struct Ogrenci* next;
};

// Yeni öğrenci düğümü oluşturma
struct Ogrenci* newOgrenci(int num, char ad[], int vize, int final) {
    struct Ogrenci* temp = (struct Ogrenci*)malloc(sizeof(struct Ogrenci));
    temp->OgrenciNo = num;
    strcpy(temp->Ad, ad);
    temp->Vize = vize;
    temp->Final = final;
    temp->Ortalama = (vize * 0.4) + (final * 0.6); // Vize'nin %40'ı, Final'in %60'ı
    // Rakam değerinin hesaplanması
    if (temp->Ortalama < 25)
        temp->Rakam = 1;
    else if (temp->Ortalama < 50)
        temp->Rakam = 2;
    else if (temp->Ortalama < 75)
        temp->Rakam = 3;
    else
        temp->Rakam = 4;
    temp->next = NULL;
    return temp;
}

// Bağlı listeye öğrenci ekleme
void ekle(struct Ogrenci** bas, struct Ogrenci* yeni) {
    struct Ogrenci* temp = *bas;

    // Liste boşsa
    if (temp == NULL) {
        yeni->next = yeni;
        *bas = yeni;
    } else if (yeni->Ortalama >= temp->Ortalama) {
        // Yeni öğrencinin ortalaması en yüksek olduğunda
        while (temp->next != *bas)
            temp = temp->next;
        temp->next = yeni;
        yeni->next = *bas;
        *bas = yeni;
    } else {
        // Diğer durumlarda
        while (temp->next != *bas && temp->next->Ortalama > yeni->Ortalama)
            temp = temp->next;
        yeni->next = temp->next;
        temp->next = yeni;
    }
}

// Bağlı listeyi yazdırma
void yazdir(struct Ogrenci* bas) {
    if (bas == NULL) {
        printf("Liste Bos.\n");
        return;
    }
    struct Ogrenci* temp = bas;
    do {
        printf("Ogrenci No: %8d || Ad: %6s || Vize: %3d || Final: %3d || Ortalama: %3.1f || Rakam: %1d\n\n", temp->OgrenciNo, temp->Ad, temp->Vize, temp->Final, temp->Ortalama, temp->Rakam);
        temp = temp->next;
    } while (temp != bas); // Döngüyü sonlandırmak için temp başlangıç düğümüne dönene kadar devam et
}


// Öğrenci final notunu otomatik olarak güncelleme
void finalGuncelleOtamatik(struct Ogrenci** bas, char ad[]) {
    struct Ogrenci* temp = *bas;
    struct Ogrenci* prev = NULL;

    // İsim eşleşene kadar öğrenciyi bul
    while (strcmp(temp->Ad, ad) != 0 && temp->next != *bas) {
        prev = temp;
        temp = temp->next;
    }

    // İsim eşleştiyse final notunu otomatik olarak güncelle ve ortalamayı yeniden hesapla
    if (strcmp(temp->Ad, ad) == 0) {
        temp->Final *= 1.3; // Yeni final notunu bul
        temp->Ortalama = (temp->Vize * 0.4) + (temp->Final * 0.6); // Yeni ortalama hesaplama
        // Yeni rakam değerini hesapla
        if (temp->Ortalama < 25)
            temp->Rakam = 1;
        else if (temp->Ortalama < 50)
            temp->Rakam = 2;
        else if (temp->Ortalama < 75)
            temp->Rakam = 3;
        else
            temp->Rakam = 4;

        // Bağlı listeyi güncelle
        if (temp != *bas) {
            prev->next = temp->next;
            ekle(bas, temp);
        } else {
            // Eğer güncellenen öğrenci başta ise, başı güncelle
            while (prev->next != *bas)
                prev = prev->next;
            *bas = temp->next;
            prev->next = temp->next;
            ekle(bas, temp);
        }
    } else {
        printf("Ogrenci bulunamadi.\n");
    }
}

// Dosyadan öğrenci kayıtlarını okuma ve işleme
void dosyadanOku(char* dosyaAdi, struct Ogrenci** bas) {
    FILE* dosya = fopen(dosyaAdi, "r");
    if (dosya == NULL) {
        perror("Dosya acilamadi");
        exit(EXIT_FAILURE);
    }
    int num, vize, final;
    char ad[50];
    while (fscanf(dosya, "%d %s %d %d", &num, ad, &vize, &final) != EOF) {
        struct Ogrenci* yeni = newOgrenci(num, ad, vize, final);
        ekle(bas, yeni);
    }
    fclose(dosya);
}

void oyunaBasla(struct Ogrenci* bas) {
    struct Ogrenci* temp = bas;
    struct Ogrenci* onceki;
    
    // Rastgele bir öğrenci düğümünden başlayın
    int rastgeleAdim = rand() % 10; // Her döngüde yeni bir rastgele adım alınmalı
    onceki = temp;
    //printf("%d %d\n",rand(), rastgeleAdim);
    for (int i = 0; i < rastgeleAdim; i++) {
        onceki = temp;
        temp = temp->next;
    }
    printf("%s geldi.\n",temp->Ad);
    printf("===========================\n");

    while (temp->next != temp) {
        // Belirlenen adımda bir sonraki düğüme gitmek için döngü kullanın
        // printf("%s Ad - %d rakam\n",temp->Ad,temp->Rakam);
        int sayii=temp->Rakam;
        printf("Gecilen kisiler: ");
        for (int i = 0; i < sayii; i++) {
            onceki = temp;
            temp = temp->next;
            printf("%s - ",temp->Ad);
        }
        printf ("\n\n");
        yazdir(bas);
        printf("--------  Basariyla silindi. (%s) ---------\n",temp->Ad);
        // İlgili düğümü listeden silin
        onceki->next = temp->next;

        // Eğer silinen düğüm baştaysa, başı güncelle
        if (temp == bas) {
            bas = onceki->next;
        }

        // Silinen düğümü serbest bırakın
       // free(temp);

        // Sonraki düğümü güncelleyin
       // temp = onceki->next;
        //printf("%s temp artik bu.",temp->Ad);
    }

    // Son kalan düğümü ekrana yazdırarak oyunun kazananını belirtin
    printf("\nOyunu kazanan: %s\n", temp->Ad);
}




// Test etmek için main fonksiyonu
int main() {

    srand(time(NULL));
    struct Ogrenci* bas = NULL;
    dosyadanOku("ogrenci.txt", &bas);
    printf("Dairesel Bagli Liste:\n");
    yazdir(bas);

    char isim[50];

    printf("\nFinal notunu otomatik olarak guncellemek istediginiz ogrencinin ismini girin: ");
    scanf("%s", isim);

    finalGuncelleOtamatik(&bas, isim);

    printf("\nGuncellenmis Dairesel Bagli Liste:\n");
    yazdir(bas);
    oyunaBasla(bas); 


    return 0;
}