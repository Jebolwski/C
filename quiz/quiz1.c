#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(){

    printf("A)");
    printf("\n");
    printf("Hello,World\n");
    printf("\n");

    int a;
    double b;
    float c;
    char d;

    printf("B)");
    printf("\n");

    printf("Sirasiyla int,double,float,char girin : \n");
    scanf("%d\n",&a);
    scanf("%lf\n",&b);
    scanf("%f\n",&c);
    scanf("%c\n",&d);

    printf("Integer : %d ",a);
    printf("Double : %lf ",b);
    printf("Float : %f ",c);
    printf("Char : %c ",d);

    getch();


}