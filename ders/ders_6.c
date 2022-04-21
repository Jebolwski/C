#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int yaz(int n){
    if(n>0){
        yaz(n-1);
    }
    printf("%d ",n);
}

int yuz_ikiyuz(){
    int i=0;
    while(i<10){
        float number = rand()/(double)RAND_MAX*200;
        if(number>100.0 && number<200.0){
            printf("%f\n",number);
            i++;
        }
    }
}

int main(){
    yaz(6);
    printf("\n");
    yuz_ikiyuz();
}