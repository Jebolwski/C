#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    int array[6];
    for (int i=0;i<6;i++){
        printf("%i.Deger : ",i+1);
        scanf("%i",&array[i]);
    }
    for(int i = 0;i<6;i++){
        int temp=array[i];
        int j=i-1;
        while(temp<array[j] && j>=0){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=temp;
    }

    for(int i=0;i<6;i++){
        printf("%d ",array[i]);
    }
    getch();

}