#include <stdio.h>
#include <conio.h>
#include <math.h>


int main(){
    
    int num;
    printf("Bir numara girin : ");
    scanf("%d",&num);
    if(((num/10)+num%10 == num) || (num/100)+num-num/100==num){
        printf("Evet. %d",num);
    }
    else{
        printf("Hayir.");
    }
    int dam = pow((num/100),3)+pow(((num/10)-((num/100)*10)),3)+pow((num%10),3);
    if(dam==num){
        printf("Bu egolu numara %d.",dam);
    }
    else{
        printf("Bu normal numara %d.",dam);
    }
    getch();
}