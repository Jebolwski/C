#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


int main(){
    int dogum;
    int simdi;
    printf("-------Yas Belirleyici--------\n");
    printf("Dogum yiliniz : ");
    scanf("%d",&dogum);
    printf("Simdiki yil : ");
    scanf("%d",&simdi);
    int HATA_KODU;

    if(simdi>dogum){
        if(simdi-dogum<150){
            if(dogum>=0 || simdi>=0){
                printf("Yasiniz : %d\n",simdi-dogum);
            }
            else{
                HATA_KODU=1;
                printf("Hata! Hata Kodu : %d\a\n",HATA_KODU);
            }
        }
        else{
            HATA_KODU=2;
            printf("Hata! Hata Kodu : %d\a\n",HATA_KODU);
        }
    }
    else{
        HATA_KODU=3;
        printf("Hata! Hata Kodu : %d\a\n",HATA_KODU);
    }
    printf("------------------------------");
    getch();


}