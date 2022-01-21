#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// int fib(int i)
// {
//     if(i==0){
//         return 0;
//     }
//     else if(i==1){
//         return 1;
//     }
//     else{
//         return fib(i-1)+fib(i-2);
//     }
// }
int main(void)
{    
    // int a=10;
    // int *i;
    // i=&a;
    // int *p;
    // p=&i;
    // printf("%d %d \n",&a ,*p);
    
    // int *c = (int*)malloc(sizeof(int)*11);
    // c[3]=20;
    // printf("girdi\n");
    // printf("%i",c[11]);
    

    int array[10];
    array[0]=1;
    array[1]=1;
    int i;
    for(i=2;i<10;i++){
        array[i]=array[i-1]+array[i-2];
        
    }
    for(i=0;i<10;i++){
        printf("%i\n",array[i]);
    }

    printf("\n");

    int a=10;
    int *p;
    p=&a;
    *p=*p+10;
    printf("Adress of a with '&a': %d\nValue of 'a' with *p: %d\nAdress of a with 'p': %d",&a,*p,p);
    FILE* ali;
    ali=fopen("C:/Users/mertg/OneDrive/Masaüstü/Dosya/Programming/c/hello.txt","r");
    fputs("Ali HELLLO!",ali);
    char ch=fgetc(ali);
    fclose(ali);

    
    
    getch();


}