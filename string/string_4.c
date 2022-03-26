#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>



int main(){

    // char string[50];
    // printf("Enter your name : ");
    // scanf("%s",string);
    // printf("Your old name : %s\n",string);
    // string[0]="F";
    //  int a=0;
    //  while(a<strlen(string)){
    //      a=a+1;
    //      if(str[a]== 'a' || str[a] == 'A' || str[a] == 'e' || str[a] == 'E' || str[a] == 'i' || str[a] == 'I' || str[a] =='o' || str[a]=='O' || str[a] == 'u' || str[a] == 'U'){
    //          str[a+2]=str[a+1];
    //          str[a+1] = '-';
    //          for(int i=a+2;i<strlen(string);i=i+2){
    //              str[i+1]=str[i];
    //          }
    //      }
    //  }
    // printf("Your new name : %s",string);

    char str[50];
    char str1[50];
    printf("\nEnter a string : ");
    fgets(str,50,stdin);
    printf("\nEnter another string : ");
    fgets(str1,50,stdin);
    if(strlen(str)>strlen(str1)){
        printf("\nBigger string is : %s",str);
    }
    else if(strlen(str1)>strlen(str)){
        printf("\nBigger string is : %s",str1);
    }
    else{
        printf("\nThey are equal!");
    }
    getch();
    getch();
}