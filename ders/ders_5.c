#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#define PI 3.14159

int main(){
    float aci;
    printf("Aciyi giriniz : ");
    scanf("%f",&aci);
    float radyan = aci*PI/180;
    printf("Acinin sinusu : %f\n",sin(radyan));
    printf("Acinin cosunusu : %f\n",cos(radyan));
    float sayi;
    printf("Bir sayi giriniz : ");
    scanf("%f",&sayi);
    printf("Sayinin e tabaninda logu : %f\n",log10(sayi));
    while(1){
        printf("%d\n",rand());
        getch();
    }
}