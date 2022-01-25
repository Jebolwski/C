#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(void){
    // int number;
    // printf("Enter a number:");
    // scanf("%i",&number);
    // if(number>0){
    //     printf("Positive");
    // }
    // else if(number<0){
    //     printf("Negative");
    // }
    // else{
    //     printf("Zero");
    // }
    // int a =10;
    // int *p;
    // p=&a;
    // printf("\n*p : %i p : %i",*p,p);
    // printf("\np+10 : %i,*p+10 : %i",p+10,*p+10);

    char grade;
    printf("Enter your grade: ");
    scanf("%c\n",&grade);
    switch (grade)
    {
    case 'A':
        printf("GoDly");
        break;
    case 'B':
        printf("GUD");
        break;
    case 'C':
        printf("Do BEtTEr");
        break;
    case 'D':
        printf("WORK WORK WORK");
        break;
    default:
        printf("Wrong grade.");
        break;
    }
    getch();

}