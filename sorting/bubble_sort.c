#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>




int main(){

    int array[10];

    for (int i=0;i<10;i++){
        printf("%i.Deger : ",i+1);
        scanf("%i",&array[i]);
    }
    printf("Girdiginiz Dizi :");
    for (int i=0;i<10;i++){
        printf("%i ",array[i]);
    }
    printf("\n");
    
       for (int i=0;i<9;i++){
            for(int j=0;j<9-i;j++){
                if (array[j]>array[j+1]){
                int temp;
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
                printf("Dizinin hali : ");
                    for (int i=0;i<10;i++){
                    printf("%i ",array[i]);
                    }
                printf("\n");
                }
            } 
        }
    
    printf("Dizinin son hali : ");
    for (int i=0;i<10;i++){
        printf("%i ",array[i]);
    }
    getch();
}