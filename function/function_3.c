#include <stdio.h>
#include <conio.h>



int ebob(int num1,int num2){
    int num1c=num1;
    int num2c=num2;
    int i=1;
    while(1){
        
        
        num1c=num1c*i;
        if(num1c%num1==0 && num1c%num2==0){
            printf("EBOB : %d\n",num1c);
            break;
        }
        else{
            num2c=num2c*i;
            if(num2c%num1==0 && num2c%num2==0){
            printf("EBOB : %d\n",num2c);
            break;
            }
        }
        i++;

    }
}

int ekok(int num1,int num2){
    int a;
    if(num1>num2){
        a=num1;
    }
    for (int i = 2; i<a; i++)
    {
        if(num1%i==0 && num2%i==0){
            printf("EKOK : %d",i);
            return 0;  
        }
    }
    printf("EKOK : 1");
    

}

int main(){

    ebob(21,2);
    ekok(22,4);

}
