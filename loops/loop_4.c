#include <stdio.h>
#include <conio.h>


int main(){
    int sayi;
    printf("Bir sayi giriniz : ");
    scanf("%d",&sayi);
    int digit=0;
    int basamak_toplam=0;
    while(sayi>0){
        basamak_toplam+=sayi%10;
        printf("Basamaklar : %d\n",sayi%10);
        sayi=sayi/10;
        digit++;
    }

    printf("%d basamakli.\n",digit);
    printf("Basamaklar toplami : %d.",basamak_toplam);

    getch();
}