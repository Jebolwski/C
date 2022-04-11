#include <stdio.h>
#include <conio.h>
#include <string.h>



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

int binary(int num){
    int array[8];
    int i = 0;
    printf("%d in binary : ",num);
    while(i<8){
        array[i] = num%2;
        num=num/2;
        i++;
    }
    for (int i = 8; i > 0; i--)
    {   
        if(i==4){
            printf(" ");
        }
        printf("%d",array[i]);
    }
    
}

int anagram(char str1[],char str2[]){
    if(strlen(str1)!=strlen(str2)){
        printf("Anagram degil.");
    }
    else{
        int d=0;
        for (int i = 0; i < strlen(str1); i++)
        {
            for (int j = 0; j < strlen(str2); j++)
            {
                if(str1[i]==str2[j]){
                    printf("%c==%c\n",str1[i],str2[i]);
                }
                d++;
            }
        }
        if(d==strlen(str1)^2){
            printf("Anagramlar.");
        }
        else{
            printf("Wat %d!=%d",d,strlen(str1));
        }
    }


}

int main(){

    ebob(21,2);
    ekok(22,4);
    printf("\n");
    binary(256);
    char str1[40];
    char str2[40];
    printf("\nBirinci kelime : ");
    scanf("%s",str1);
    printf("Ikinci kelime : ");
    scanf("%s",str2);
    anagram(str1,str2);
    getch();
}
