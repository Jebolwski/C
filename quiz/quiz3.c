#include <stdio.h>
#include <conio.h>




int main(){
    
    int a1=0;
    int b1=1;
    int c1=0;
    while(c1<=233){
        printf("%d ",c1);
        a1=b1;
        b1=c1;
        c1=a1+b1;  
    }


    int a=0;
    int b=1;
    int c=0;
    int sayi;
    printf("\nBir sayi giriniz : ");
    scanf("%d",&sayi);
    printf("\n");
    for(int i=3;i<sayi;i++){
        printf("%d \n",c);
        a=b;
        b=c;
        c=a+b;
    }
    getch();
}