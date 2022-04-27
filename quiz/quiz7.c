#include <stdio.h>



int mukemmelmi(int sayi){
    int toplam=0;
    for (int i = 1; i < sayi; i++)
    {
        if(sayi%i==0){
            toplam=toplam+i;
        }
    }
    if(toplam==sayi){
        printf("%d\n",sayi);
    }
}

void mukemmeller(int sayi1,int sayi2){
    for (int i = sayi1; i <= sayi2; i++)
    {
        mukemmelmi(i);
    }
}

int main(){
    int sayi1,sayi2;
    printf("sayi1 : ");
    scanf("%d",&sayi1);
    printf("sayi2 : ");
    scanf("%d",&sayi2);
    mukemmeller(sayi1,sayi2);



}