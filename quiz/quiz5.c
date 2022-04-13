#include <stdio.h>
#include <math.h>
#include <conio.h>


int main(){

    float a;
    float b;
    float c;
    printf("a : ");
    scanf("%f",&a);
    printf("b : ");
    scanf("%f",&b);
    printf("c : ");
    scanf("%f",&c);

    float disk = (b*b)-(4*a*c);
    printf("%f\n",disk);
    if(disk>0){
        float cevap1 = (-b+sqrt(disk))/(2*a);
        float cevap2 = (-b-sqrt(disk))/(2*a);
        printf("Kokler : %f %f",cevap1,cevap2);
    }
    else if(disk==0){
        printf("Cift kok : %f",-(b/2*a));
    }
    else{
        printf("Diskiriminant 0'dan kucuk, kok yok.");
    }
    getch();


}
