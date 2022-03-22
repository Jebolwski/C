#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(){
    int a;

    printf("Bir sayi giriniz : ");
    scanf("%d",&a);

    printf("Bu tamsayinin bolenleri : ");
    for(int i = 1;i<=a;i++){
        if(a%i==0){
            printf("%d ",i);
        }
    }

    int saat;
    int d=1;
    printf("\nBakteriler kac saat cogalacak : ");
    scanf("%d",&saat);
    for(int i=1;i<=saat;i++){
        d=d*2;
    }
    printf("Toplam %d saatin sonunda 1 bakteriden olusan bakteri sayisi : %d.",saat,d);
    getch();
}