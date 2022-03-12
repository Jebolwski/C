#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



int main(){
    int yas;
    char isim[50];
    printf("Isminiz : ");
    scanf("%s",isim);
    printf("\nYasiniz : ");
    scanf("%i",&yas);

    printf("\nIsminiz : %s ,Yasiniz : %i",isim,yas);
    printf("\n\nIsmin dizisinin 1.adresi : %x ,Yasin adresi : %x",isim,&yas);

    getch();


}