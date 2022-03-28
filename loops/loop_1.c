#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main(){
    // char a[50];
    // char b[50];
    // int c;
    // printf("Enter a name : ");
    // scanf("%s",a);
    // printf("Enter another name : ");
    // scanf("%s",b);
    // printf("Enter number of loops  : ");
    // scanf("%d",&c);
    // for(int i=0;i<c;i++){
    //     printf("%s - %s ",a,b);
    // }
    // int a1=0;
    // int b1=1;
    // int c1=0;
    // while(c1<100){
    //     a1=b1;
    //     b1=c1;
    //     c1=a1+b1;
    //     printf("%d ",b1);
    // }
    // int a2;
    // printf("\nEnter a number : ");
    // scanf("%d",&a2);
    // for (int i = 1; i <= a2; i++)
    // {
    //     printf("%d * %d : %d \n",a2,i,a2*i);
    // }
    int i;
    for(i=1;i<=10;i++){
        printf("%d",i);
        for(int j=1;j<i;j++){
            printf("%d",j);
        }
        for(int a=10;a>=i;a--){
            printf(" ");
        }
        for(int j=1;j<i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}

