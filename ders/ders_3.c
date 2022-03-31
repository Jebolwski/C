#include <stdio.h>
#include <conio.h>



int main(){
    float toplam=0, sayi=0;
    int not;
    int yanit=1;
    while(yanit)
    {
        printf("Ogrencinin notunu giriniz (cikis icin -1) : ");
        scanf("%d",&not);
        if((not>100 && not!=-1) || (not<0 && not!=-1)){
            printf("Yanlis girdiniz tekrar giriniz : ");
            scanf("%d",&not);
        }
        if(not==-1){
            yanit=0;
        }
        else{
            toplam=toplam+not;
            sayi=sayi+1;
        }
    }
    printf("%f\n",toplam);
    printf("%f\n",sayi);
    printf("Ortalama : %f",toplam/sayi);
    getch();
}