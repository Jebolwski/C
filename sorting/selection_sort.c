#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    int array[6];
    printf("Dizinin degerlerini girin : \n");
    for(int i=0;i<6;i++){
        printf("%d.deger : ",i+1);
        scanf("%d",&array[i]);
    }

    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(array[i]<array[j]){
                i=j;
            }
        int temp = array[i];
        array[i]=array[j];
        array[j]=temp;
        }
    }
    printf("Duzenlenmis dizi : ");
    for(int i=0;i<6;i++){
        printf("%d ",array[i]);
    }
    getch();


}