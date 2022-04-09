#include <stdio.h>
#include <conio.h>


void armstrong(int num){
    int temp;
    int num1=num;
    int total=0;
    while(num>0){
        temp=num%10;
        total=total+(temp*temp*temp);
        num=num/10;
    }
    if(num1==total){
        printf("Its an armstrong number.");
    }    
    else{
        printf("Its not an armstrong number. (%d!=%d)",total,num1);

    }
}

int main(){

    int num;
    printf("Enter a num : ");
    scanf("%d",&num);

    int total=1;

    int result = 0; 
    for (int i = 1; i <= num; i++)
    {
        total=total*i;
        result=result+(total/i);
    }
    printf("Result : %d\n",result);    
    int num1;
    printf("Enter another num : ");
    scanf("%d",&num1);
    armstrong(num1);
    getch();
}