#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int fact(int);
int fib(int);
int main(void){

    int x;
    printf("Enter a number : ");
    scanf("%i",&x);
    printf("Fact: %i",fact(x));
    printf("\nFibonacci: %d",fib(x-1));
    int count=0;
    int s;
    printf("\nEnter arrays size:");
    scanf("%d",&s);
    int *array=(int*)malloc(sizeof(int)*s);
    for(int i=0;i<s;i++){
        printf("\nEnter %d. input:",i+1);
        scanf("%d",&array[i]);
    }
    for(int i=0;i<s;i++){
        while (i+1<s){
            if (array[i+1]>array[i]){
                count++;
                i++;
                printf("Count:%i S:%i\n",count+1,s);
            }
        }
    }
    if(count==s-1){
        printf("\nArray is sorted. Count:%i,S:%i\n",count+1,s);
    }
    else{
        printf("\nArray is not sorted. Count:%i,S:%i\n",count+1,s);
    }
    getch();
}
int fact(int x){
    if (x==1 || x==0){
        return 1;
    }
    else{
        return x*fact(x-1);
    }
    
}
int fib(int y){
    if(y==0||y==1){
        return 1;
    }
    else{
        return fib(y-1)+fib(y-2);
    }
}