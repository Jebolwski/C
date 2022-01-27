#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(void){
    int array1[]={1,2,3,4,5};
    int array2[5];

    for (int i=0;i<5;i++) {
        array2[i]=array1[i];
         printf("array2[%d] : %d ",i,array2[i]);
    }

    int array3[5];
    printf("\n---------Dizinin degelerini giriniz.-----------\n");
    for (int i=0;i<5;i++) {
        printf("%d. deger:",i+1);
        scanf("%d",&array3[i]);
    }

    printf("-----------Dizi------------\n");
    for (int i=0;i<5;i++){
        printf("%d ",array3[i]);
    }

    printf("\n");

    printf("------Dizinin Elemanlarinin Toplami-----\n");
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+array3[i];
    }
    printf("%d\n",sum);

    printf("-----------Dizinin Tersi------------\n");
    for (int i=4;i>=0;i--){
        printf("%d ",array3[i]);
    }
    getch();
    
}