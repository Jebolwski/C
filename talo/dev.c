#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>
// Polinom yapısı
struct Polinom {
    int katsayi;
    int ust_derecesi;
    struct Polinom* sonraki;
};

// Yeni bir polinom duğumu oluşturma
struct Polinom* yeniPolinom(int katsayi, int ust_derecesi) {
    struct Polinom* yeni = (struct Polinom*)malloc(sizeof(struct Polinom));
    yeni->katsayi = katsayi;
    yeni->ust_derecesi = ust_derecesi;
    yeni->sonraki = NULL;
    return yeni;
}

// Polinomu yazdırma
void polinomYazdir(struct Polinom* polinom) {
	static bool Girsin=false;
    if (polinom == NULL) {
        printf("0\n");
		   
	 }
	
	int katsayi_toplam;
    // Polinom ust derecesine göre buyukten kuçuğe doğru sıralanır
    while (polinom != NULL) {
         	katsayi_toplam = polinom->katsayi;
        	struct Polinom* gecici = polinom->sonraki;
        	while (gecici != NULL && gecici->ust_derecesi == polinom->ust_derecesi) {
          	katsayi_toplam = gecici->katsayi;
          	gecici = gecici->sonraki;
        	}
        // Aynı ust dereceye sahip terimlerin katsayılarını topla
		if (katsayi_toplam != 0) {
	    	if (Girsin) {
	    	printf("+ ");
	   	}
	    if (polinom->ust_derecesi==0){
            printf("%d", katsayi_toplam);
        }else{
            if (katsayi_toplam==1){
                printf("x^%d ", polinom->ust_derecesi);
            }else{
                if (polinom->ust_derecesi==1){

                printf("%dx ", katsayi_toplam);
                }else{
                printf("%dx^%d ", katsayi_toplam, polinom->ust_derecesi);

                }
            }
        }
	    Girsin=true;
	}
	polinom = gecici;
}
Girsin=false;
//printf("%dx^%d ", katsayi_toplam, polinom->ust_derecesi);
    printf("\n");
}

// Polinom duğumlerini ust derecesine göre buyukten kuçuğe doğru ekler
void polinomEkleSirali(struct Polinom** polinom, int katsayi, int ust_derecesi) {
    struct Polinom* yeni = yeniPolinom(katsayi, ust_derecesi);

    // Eklenecek duğumun ilk duğum olması durumu
    if (*polinom == NULL || ust_derecesi > (*polinom)->ust_derecesi) {
        yeni->sonraki = *polinom;
        *polinom = yeni;
    } else {
        struct Polinom* current = *polinom;
        while (current->sonraki != NULL && current->sonraki->ust_derecesi > ust_derecesi) {
            current = current->sonraki;
        }
        yeni->sonraki = current->sonraki;
        current->sonraki = yeni;
    }
}

// Polinom duğumlerini istenilen ust dereceye göre siler
void polinomDugumuSil(struct Polinom** polinom, int ust_derece) {
    struct Polinom* gecici;
    while (*polinom != NULL && (*polinom)->ust_derecesi == ust_derece) {
        gecici = *polinom;
        *polinom = (*polinom)->sonraki;
        free(gecici);
    }
    if (*polinom == NULL) {
        return;
    }
    struct Polinom* onceki = *polinom;
    struct Polinom* current = (*polinom)->sonraki;
    while (current != NULL) {
        if (current->ust_derecesi == ust_derece) {
            gecici = current;
            onceki->sonraki = current->sonraki;
            current = current->sonraki;
            free(gecici);
        } else {
            onceki = current;
            current = current->sonraki;
        }
    }
}

// İki polinomu toplar
struct Polinom* polinomTopla(struct Polinom* polinom1, struct Polinom* polinom2) {
    struct Polinom* toplam = NULL;
    while (polinom1 != NULL && polinom2 != NULL) {
        if (polinom1->ust_derecesi > polinom2->ust_derecesi) {
            polinomEkleSirali(&toplam, polinom1->katsayi, polinom1->ust_derecesi);
            polinom1 = polinom1->sonraki;
        } else if (polinom1->ust_derecesi < polinom2->ust_derecesi) {
            polinomEkleSirali(&toplam, polinom2->katsayi, polinom2->ust_derecesi);
            polinom2 = polinom2->sonraki;
        } else {
            polinomEkleSirali(&toplam, polinom1->katsayi + polinom2->katsayi, polinom1->ust_derecesi);
            polinom1 = polinom1->sonraki;
            polinom2 = polinom2->sonraki;
        }
    }
    // Geriye kalan terimlerin hepsi eklenecek
    while (polinom1 != NULL) {
        polinomEkleSirali(&toplam, polinom1->katsayi, polinom1->ust_derecesi);
        polinom1 = polinom1->sonraki;
    }
    while (polinom2 != NULL) {
        polinomEkleSirali(&toplam, polinom2->katsayi, polinom2->ust_derecesi);
        polinom2 = polinom2->sonraki;
    }
    return toplam;
}

double polinomHesapla(struct Polinom* polinom, double x) {
    double sonuc = 0.0;
    while (polinom != NULL) {
        sonuc += polinom->katsayi * pow(x, polinom->ust_derecesi);
        polinom = polinom->sonraki;
    }
    return sonuc;
}

int main() {
    // Rastgele sayı uretmek için tohumlama
    srand(time(NULL));
    struct Polinom* ilkPolinom = NULL;
    struct Polinom* ikinciPolinom = NULL;

    for (int i = 0; i < 3; i++) {
        int katsayi = rand() % 10+1; // 1-10 arasında rastgele katsayı
        int ust_derecesi = rand() % 5+1; // 1-5 arasında rastgele ust derece
        polinomEkleSirali(&ilkPolinom, katsayi, ust_derecesi);
    }
    
    // İkinci polinom oluşturma
    for (int i = 0; i < 3; i++) {
        int katsayi = rand() % 10+1; // 1-10 arasında rastgele katsayı
        int ust_derecesi = rand() % 5+1; // 1-5 arasında rastgele ust derece
        polinomEkleSirali(&ikinciPolinom, katsayi, ust_derecesi);
    }
    while (1){
        printf("1. Polinomlari rastgele sayilar ile uret ve bagli listeyi olustur.\n");
        printf("2. Listele.\n");
        printf("3. X degerine gore hesapla.\n");
        printf("4. Polinom derecesine gore sil.\n");
        printf("5. Polinom topla.\n");
        printf("6. Cikis.\n");

        int x;
        printf("Sec birini : ");
        scanf("%d", &x);
        if (x==1){
            // İlk polinom oluşturma
            for (int i = 0; i < 3; i++) {
                int katsayi = rand() % 11; // 1-10 arasında rastgele katsayı
                int ust_derecesi = rand() % 6; // 1-5 arasında rastgele ust derece
                polinomEkleSirali(&ilkPolinom, katsayi, ust_derecesi);
            }
    
            // İkinci polinom oluşturma
            for (int i = 0; i < 3; i++) {
                int katsayi = rand() % 11; // 1-10 arasında rastgele katsayı
                int ust_derecesi = rand() % 6; // 1-5 arasında rastgele ust derece
                polinomEkleSirali(&ikinciPolinom, katsayi, ust_derecesi);
            }
            printf("Olusturuldu.\n");

            // Oluşturulan polinomları yazdırma
            printf("Ilk polinom: ");
            polinomYazdir(ilkPolinom);
            printf("Ikinci polinom: ");
            polinomYazdir(ikinciPolinom);
        }
        else if (x==2){
            // Oluşturulan polinomları yazdırma
            printf("Ilk polinom: ");
            polinomYazdir(ilkPolinom);
            printf("Ikinci polinom: ");
            polinomYazdir(ikinciPolinom);
        }
        else if (x==3){
            int y; // Örnek olarak x değeri
            printf("X degerini sec : ");
            scanf("%d",&y);
            double sonuc1 = polinomHesapla(ilkPolinom, y);
            double sonuc2 = polinomHesapla(ikinciPolinom, y);
            printf("Polinom 1 icin x = %d sonucu: %.2f\n", y, sonuc1);
            printf("Polinom 2 icin x = %d sonucu: %.2f\n", y, sonuc2);
        }
        else if (x==4){
            // İstenilen ust dereceye göre polinom duğumlerini silme
            int ust_derece_sil;
            printf("Silinecek ust girin : ");
            scanf("%d", &ust_derece_sil);
            printf("Ust derecesi %d olan terimler siliniyor...\n", ust_derece_sil);
            polinomDugumuSil(&ilkPolinom, ust_derece_sil);
            polinomDugumuSil(&ikinciPolinom, ust_derece_sil);
    
            // Silinmiş polinomları yazdırma
            printf("Silindikten sonra:\n");
            printf("Ilk polinom: ");
            polinomYazdir(ilkPolinom);
            printf("Ikinci polinom: ");
            polinomYazdir(ikinciPolinom);
        }
        else if (x==5){
            // İki polinomu toplayıp sonucu yazdırma
            printf("Toplam: ");
            struct Polinom* toplam = polinomTopla(ilkPolinom, ikinciPolinom);
            polinomYazdir(toplam);
        }
        else{
            break;
        }
    }
    // Belleği serbest bırak
        struct Polinom* temp;
        while (ilkPolinom != NULL) {
            temp = ilkPolinom;
            ilkPolinom = ilkPolinom->sonraki;
            free(temp);
        }
        while (ikinciPolinom != NULL) {
            temp = ikinciPolinom;
            ikinciPolinom = ikinciPolinom->sonraki;
            free(temp);
        }
    printf("Bitti.\n");
}