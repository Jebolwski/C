#include <stdio.h>
#include <conio.h>



int main(){

    int sayi1;
    int sayi2;

    printf("Bir sayi giriniz : ");
    scanf("%d",&sayi1);
    printf("Daha buyuk bir sayi giriniz : ");
    scanf("%d",&sayi2);

    while(1){

        if(sayi1>sayi2){
            printf("Tekrar deneyiniz : ");
            scanf("%d",&sayi2);
        }
        else{
            break;
        }

    }
    int total=0;
    int total1=1;
    for(int i=sayi1;i<sayi2;i++){
        total1=total1*i;
        total=total+i;

    }

    printf("Aralarindaki sayilarin toplami %d.\n",total);
    printf("Aralarindaki sayilarin carpimi %d.",total1);

    getch();

}