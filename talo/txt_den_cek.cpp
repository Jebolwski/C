#include <stdio.h>    
#include <stdlib.h>  
#include <limits.h> 
#include <string.h>   
#include <time.h>
#include <stdbool.h>  

struct Ogrenci {
    int numara,sinif;
    char ad[50],soyad[50];
    double ortalama;
    struct Ogrenci* sonraki;
    struct Ogrenci* onceki;
};

struct Bagliliste {
    struct Ogrenci* bas;
    struct Ogrenci* son;
};

struct Bagliliste* Bagliliste_olustur() {
    struct Bagliliste* yeniListe = (struct Bagliliste*)malloc(sizeof(struct Bagliliste));
    
	yeniListe->bas = NULL;
    yeniListe->son = NULL;
    
	return yeniListe;
}

void Ogrenci_ekle(struct Bagliliste* liste, int numara, const char* ad, const char* soyad, int sinif, double ortalama) {
    struct Ogrenci* ogr = (struct Ogrenci*)malloc(sizeof(struct Ogrenci));
    
	ogr->numara = numara;
    
	strcpy(ogr->ad, ad);
    strcpy(ogr->soyad, soyad);
    
	ogr->sinif = sinif;
    ogr->ortalama = ortalama;
    ogr->sonraki = ogr;
    ogr->onceki = ogr;

    if (liste->bas == NULL) {
        liste->bas = ogr;
        liste->son = ogr;
    } else {
        ogr->onceki = liste->son;
        ogr->sonraki = liste->bas;
        
		liste->son->sonraki = ogr;
        liste->bas->onceki = ogr;
        liste->son = ogr;
    }
}

void Dosyadan_ekle(struct Bagliliste* liste, const char* dosyaAdi) {
    FILE* dosya = fopen(dosyaAdi, "r");
    if (dosya == NULL) {
        printf("Dosya acilamadi.\n");
        return;
    }

    char satir[256];
    if (fgets(satir, sizeof(satir), dosya) != NULL) {
    }

    int numara, sinif;
    char ad[50], soyad[50];
    double ortalama;

    while (fscanf(dosya, "%d %s %s %d %lf", &numara, ad, soyad, &sinif, &ortalama) == 5) {
        Ogrenci_ekle(liste, numara, ad, soyad, sinif, ortalama);
    }

    fclose(dosya);
}

void Yazdirma(struct Bagliliste* liste) {
    if (liste->bas == NULL) {
        printf("Liste bos.\n");
        return;
    }

    struct Ogrenci* temp = liste->bas;
    printf("Ogrenciler:\n");
    do {
        printf("Numara: %d, Ad: %s, Soyad: %s, Sinif: %d, Ortalama: %.2lf\n",temp->numara, temp->ad, temp->soyad, temp->sinif, temp->ortalama);
        temp = temp->sonraki;
    } while (temp != liste->bas);
}
void Silme(struct Bagliliste* liste, int numara, const char* ad, const char* soyad) {
    if (liste->bas == NULL) {
        printf("Liste bos.\n");
        return;
    }

    struct Ogrenci* temp = liste->bas;
	int varmi=0;
    do {
        if (temp->numara == numara && strcmp(temp->ad, ad) == 0 && strcmp(temp->soyad, soyad) == 0) {
            varmi=1;
            if (temp == liste->bas && temp == liste->son) {
                liste->bas = NULL;
                liste->son = NULL;
			} 
			
			else if (temp == liste->bas) {
                liste->bas = temp->sonraki;
                liste->bas->onceki = liste->son;
                liste->son->sonraki = liste->bas;
            
			}
			else if (temp == liste->son) {
                liste->son = temp->onceki;
                liste->son->sonraki = liste->bas;
                liste->bas->onceki = liste->son;
            
			}
			else {
                temp->onceki->sonraki = temp->sonraki;
                temp->sonraki->onceki = temp->onceki;
            }

            free(temp);
            printf("%d numarali %s %s listeden silinmistir.\n", numara, ad, soyad);
            return;
        }
        temp = temp->sonraki;
    } while (temp != liste->bas);

    if (varmi==0) {
        printf("Ogrenci mevcut degil.\n");
    }
}



void Siralama(struct Bagliliste* liste) {

    struct Ogrenci* temp1 = liste->bas;
    struct Ogrenci* temp2;

    do {
        temp2 = temp1->sonraki;
        while (temp2 != liste->bas) {
            if (strcmp(temp1->soyad, temp2->soyad) > 0 || 
                (strcmp(temp1->soyad, temp2->soyad) == 0 && strcmp(temp1->ad, temp2->ad) > 0)) {
                int tempNumara = temp1->numara;
                char tempAd[50], tempSoyad[50];
                int tempSinif = temp1->sinif;
                double tempOrtalama = temp1->ortalama;

                strcpy(tempAd, temp1->ad);
                strcpy(tempSoyad, temp1->soyad);

                temp1->numara = temp2->numara;
                strcpy(temp1->ad, temp2->ad);
                strcpy(temp1->soyad, temp2->soyad);
                temp1->sinif = temp2->sinif;
                temp1->ortalama = temp2->ortalama;

                temp2->numara = tempNumara;
                strcpy(temp2->ad, tempAd);
                strcpy(temp2->soyad, tempSoyad);
                temp2->sinif = tempSinif;
                temp2->ortalama = tempOrtalama;
            }
            temp2 = temp2->sonraki;
        }
        temp1 = temp1->sonraki;
    } while (temp1 != liste->bas);
}
void Sinif_bilgisi(struct Bagliliste* liste) {
	int sayac = 0;
	double toport = 0;
	struct Ogrenci* temp2 = liste->bas;
	struct Ogrenci* ilkDugum = liste->bas;
	do{
		sayac++;
		toport += temp2->ortalama;
		temp2 = temp2->sonraki;
	}while(temp2!=ilkDugum);
	
	printf("Toplam Ogrenci Sayisi: %d\n",sayac);
	printf("Toplam Ortalama: %.2lf\n",toport);
	printf("Ortalamalarin Ortalamasi: %.2lf\n",toport/sayac);
  
}
void Grup_bilgisi(struct Bagliliste* liste) {
int birsayac = 0;
    int ikisayac = 0;
    int ucsayac = 0;
    double toport = 0;
    double birort = 0, ikiort = 0, ucort = 0;
    double birmin = 1000, birmax = -1, ikimin = 1000, ikimax = -1;
    double ucmin = 1000, ucmax = -1;

    struct Ogrenci* temp2 = liste->bas;
    struct Ogrenci* ilkDugum = liste->bas;

    do {
        toport += temp2->ortalama;
        if (temp2->sinif == 1) {
            birsayac++;
            birort += temp2->ortalama;

            if (birmax < temp2->ortalama) {
                birmax = temp2->ortalama;
            }
            if (birmin > temp2->ortalama) {
                birmin = temp2->ortalama;
            }
        } else if (temp2->sinif == 2) {
            ikisayac++;
            ikiort += temp2->ortalama;

            if (ikimax < temp2->ortalama) {
                ikimax = temp2->ortalama;
            }
            if (ikimin > temp2->ortalama) {
                ikimin = temp2->ortalama;
            }
        } else if (temp2->sinif == 3) {
            ucsayac++;
            ucort += temp2->ortalama;

            if (ucmax < temp2->ortalama) {
                ucmax = temp2->ortalama;
            }
            if (ucmin > temp2->ortalama) {
                ucmin = temp2->ortalama;
            }
        }

        temp2 = temp2->sonraki;
    } while (temp2 != ilkDugum);

    printf("1. Her sinifta yer alan toplam ogrenci sayisi: ");
    printf("1.Sinif: %d, 2.Sinif: %d, 3.Sinif: %d\n", birsayac, ikisayac, ucsayac);
    printf("2. Her sinifta yer alan ogrencilerin toplam ortalamasi: ");
    printf("1.Sinif: %.2lf, 2.Sinif: %.2lf, 3.Sinif: %.2lf\n", 
           (birsayac > 0 ? birort / birsayac : 0.0), 
           (ikisayac > 0 ? ikiort / ikisayac : 0.0), 
           (ucsayac > 0 ? ucort / ucsayac : 0.0));
    printf("3. Her sinifta yer alan ogrencilerin maksimum ve minimum ortalamasi: ");
    printf("1.Sinif: max:%.2lf, min:%.2lf; 2.Sinif: max:%.2lf, min:%.2lf; 3.Sinif: max:%.2lf, min:%.2lf;\n",
           birmax, birmin, ikimax, ikimin, ucmax, ucmin);
  
}
void Menu() {
    struct Bagliliste* liste = Bagliliste_olustur();
    int secim;

    while (1) {
        printf("MENU\n");
        printf("1-> A EKLEME\n");
        printf("2-> B SILME \n");
        printf("3-> C ARAMA\n");
        printf("4-> D SIRALAMA\n");
        printf("5-> E SINIF BILGISI\n");
        printf("6-> F GRUP BILGISI\n");
        printf("0-> cikis\n");
        printf("Lutfen bir sayi secin:(ONCE 1 SECIP LISTEYI DOLDURMALISINIZ) ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                Dosyadan_ekle(liste, "KAYIT.txt");
                Yazdirma(liste);
                break;
            case 2: {
                int numara;
                char ad[50], soyad[50];
                printf("ogrenci numarasini giriniz: ");
                scanf("%d", &numara);
                printf("ogrenci adini giriniz: ");
                scanf("%s", ad);
                printf("ogrenci soyadini giriniz: ");
                scanf("%s", soyad);
                Silme(liste, numara, ad, soyad);
                Yazdirma(liste);
                break;
            }
            case 3: {
    				int numara;
    				printf("Bir ogrenci numarasi giriniz: ");
    				scanf("%d", &numara);
    
    				if (liste->bas == NULL) {
        			printf("Liste bos.\n");
        			break;
    				}

    				struct Ogrenci* temp = liste->bas;
					int varmi=0;
    				do {
        			if (temp->numara == numara) {
           			 varmi=1;
           			 printf("%s %s listede mevcuttur. Not Ortalamasi: %.2lf, Durum: %s\n",
                   temp->ad, temp->soyad, temp->ortalama, 
                   (temp->ortalama >= 3.00 ? "Basarili" : "Basarisiz"));
        			}
       	 			temp = temp->sonraki;
    				} while (temp != liste->bas);

   					if (varmi==0) {
        			printf("Ogrenci mevcut degil.\n");
    				}
    				break;
			}
            case 4:
                Siralama(liste);
                Yazdirma(liste);
                break;
            case 5:
            	Sinif_bilgisi(liste);
            	break;
            case 6:
            	Grup_bilgisi(liste);
            	break;
            case 0:
                printf("Cikis yapildi.\n");
                return;
            default:
                printf("Gecersiz secim yapildi tekrar seciniz.\n");
        }
    }
}

int main() {
    Menu();
    return 0;
}

