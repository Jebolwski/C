#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(void){
    char name[20];
    printf("Enter your name: ");
    scanf("%s",&name);
    printf("Hello ,%s!\n",name);
    int age;
    printf("Whats your age: ");
    scanf("%i",&age);
    printf("Ok so you are %i.\n",age);
    char character;
    printf("Enter a character:");
    scanf("%c",&character);
    printf("ASCII value of %c is %i.",character,character);
    char put[20];
    printf("Put it i will get it to you:");
    gets(put);
    printf("Here it is :%s.",put);
    getch();

}