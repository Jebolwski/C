#include <stdio.h>
#include <string.h>
#include <conio.h>

int days_to_years(int days){

    printf("%d days.\n",days);
    int year = days/365;
    int weeks = (days % 365) / 7;
    days = days - (year*365) - (weeks*7);
    printf("%d years, %d weeks, %d days.",year,weeks,days); 

}

int palindrom(char str[]){

    int count=0;
    int num = strlen(str)/2;
    
    if(strlen(str)%2==1){
        for (int i = 0; i < num; i++)
        {
            if(str[i]==str[strlen(str)-i-1]){
                count++;
            }
        }
       if(count==strlen(str)/2){
        printf("Palindrom.");
       }    
        else{
            printf("Palindrom degil. (%d!=%d)",count,strlen(str)/2);
       } 
    }
    else{
        for (int i = 0; i < num; i++)
        {
            if(str[i]==str[strlen(str)-i-1]){
                count++;
            }
        }
        if(count==strlen(str)/2){
            printf("Palindrom.");
        }    
         else{
            printf("Palindrom degil. (%d!=%d)",count,strlen(str)/2);
        }     

    }
    

}

int iki_asal(int num){
    for (int i = 2; i <= num; i++)
    {
        int num1 = i;
        int num2 = num-i;
        if(num1%2!=0 && num1%3!=0 && num1%5!=0 && num1%7!=0 && num2%2!=0 && num2%3!=0 && num2%5!=0 && num2%7!=0){
            printf("%d+%d=%d\n",num1,num2,num);
        }
    }
    
}

int main(){

    days_to_years(741);
    // char str[50];
    // printf("\nEnter a string : ");
    // scanf("%s",str);
    // palindrom(str);
    printf("\n");
    iki_asal(36);

}