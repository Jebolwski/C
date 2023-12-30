#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void main(){
    char string[30];
    printf("Girdi girin : ");
    scanf("%s",string);

    int flag=1;
    for (int i = 0; i < (strlen(string)/2); i++)
    {
        if (string[i]!=string[strlen(string)-i-1]){
            flag=0;
            break;
        }
    }

    if (flag==1){
        printf("Palindrome.\n");
    }else{
        printf("Palindrome degil.\n");
    }
    
}