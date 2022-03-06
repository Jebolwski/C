#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(void){
    char soru[50];
    char cevap[50];
    printf("Fifavox Anket Olusturma\n");
    printf("Soru Olusturun : ");
    gets(soru);
    printf("Sorunuza cevap verin : ");
    printf("%s\n",soru);
    printf("Cevabiniz : ");
    scanf("%s",&cevap);
    printf("----------------- Ozet -----------------\n");
    printf("Soru : %s\nCevap : %s",soru,cevap);
    getch();

}