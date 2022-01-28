#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(void){
    printf("Enter a number:");
    int num;
    scanf("%d",&num);
    int first;
    int last=num%10;
    printf("Last digit of number: %d\n",num%10);
    
    while(num>=10){
        num=num/10;
        first=num;
    }
    printf("First digit of number: %u",first);
    printf("\nSum of the two : %d",first+last);

    getch();
}