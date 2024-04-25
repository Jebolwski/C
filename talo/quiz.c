#include <stdio.h>
#include <stdlib.h>


int main(){
    int N=4;
    int dizi1[N];
    int dizi2[N];
    int dizi3[2*N];

    int a=1;

    for (int i = 0; i < N; i++) {
        dizi1[i]=a;
        a=a+2;
    }

    a=2;

    for (int i = 0; i < N; i++) {
        dizi2[i]=a;
        a=a+2;
    }
    
    printf("Dizi 1 : ");
    for (int i = 0; i<N; i++) {
        printf("%d | ",dizi1[i]);
    }

    printf("\n");

    printf("Dizi 2 : ");
    for (int i = 0; i<N; i++) {
        printf("%d | ",dizi2[i]);
    }

    int *ptr1 = dizi1;
    int *ptr2 = dizi2;

    int x=1;
    int y=0;

    for (int i = 0; i < 2*N; i++) {
        if (i%2==0){
            dizi3[i]=*(ptr1 + y);
            y+=1;
        }else{
            dizi3[i]=*(ptr2+ (N-x));
            x+=1;
        }
    }


    printf("\n--------------------------------\n");

    printf("Sonuc : ");
    for (int i = 0; i<2*N; i++) {
        printf("%d | ",dizi3[i]);
    }

}