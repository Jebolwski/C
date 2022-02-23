#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


 int main(){
    char ch1[5]="hi";
    char ch2[5]="hello";
    char ch3[5];
    printf("%s\n",strrev(ch2));
    printf("%s\n",strupr(ch2));
    strcpy(ch3,ch2);
    printf("%s",ch3);


 }