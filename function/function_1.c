#include <stdio.h>
#include <conio.h>


void fibonacci(int num){
    int a=0,b=1,c=0;
    printf("Fibonacci : ");
    for(int i=1;i<num;i++){
        c=a+b;
        a=b;
        printf("%d ",a);
        b=c;
        
    }
}


void faktoriyel(int num){
    int total=1;
    while(num>0){
        total=num*total;
        num--;
    }
    printf("Faktoriyel : %d",total);
}


void carpanlar(int num){
    printf("Carpanlar : ");
    for(int i=1;i<=num;i++){
        if(num%i==0){
            printf("%d ",i);
        }
    }
}

void main(){

    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    fibonacci(num);
    printf("\n");
    faktoriyel(num);
    printf("\n");
    carpanlar(num);
    getch();

}