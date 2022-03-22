#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(){
    int a;
    int b;
    for(a=0;a<10;a++){
        printf("*");
        for(b=0;b<a;b++){
            printf("*");
        } 
            printf("\n");   
    }
    for(a=0;a<10;a++){
        printf("*");
        for(b=10;b>a;b--){
            printf("*");
        }
        printf("\n");
    }
    printf("*");
    printf("\n");
    for(a=0;a<10;a++){
        printf(" ");
        for(b=10;b>a;b--){
            printf("*");
        }
        for (int i = 0; i < 4*a; i=i+2){
            printf(" ");
        }
        for(int c=10;c>a;c--)
        {
            printf("*");
        }
        printf("\n");
    }

    for(a=0;a<10;a++){
        printf(" ");
        for(b=0;b<a;b++){
            printf("*");
        }
        for(int i=60;i>6*a;i=i-3){
            printf(" ");
        }
        for (int c = 0; c < a; c++)
        {
            printf("*");
        }
        printf("\n");
        
    }



}