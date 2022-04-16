#include <stdio.h>
#include <conio.h>



int main(){

    int sayi;
    printf("Terse cevirilecek sayiyi girin : ");
    scanf("%d",&sayi);
    printf("Tersi : ");
    while(sayi>0){
        int a=sayi%10;
        sayi=sayi/10;
        printf("%d",a);
    }
    int num;
    printf("\nBir sayi girin : ");
    scanf("%d",&num);
    int fakt=1;
    int i=1;
    while(i<=num)
    {
        fakt=fakt*i;
        i++;
    }
    printf("Faktoriyeli : %d",fakt);
    if(fakt%10==0){
        printf("\nBu sayinin sonunda sifir var.");
    }
    
    
    
    getch();


}