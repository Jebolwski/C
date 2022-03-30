#include <stdio.h>
#include <conio.h>




int main(){

    int sayi;
    int i=0;
    int a=0;
    printf("Bir sayi giriniz : ");
    scanf("%d",&sayi);
    for (i=0; i<sayi; i++)
    {   
        printf("*");
        for (a=0; a<sayi-1; a++)
        {
            printf(" ");
            if ( i==0 || i==sayi-1 || a==sayi-2 )
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
            printf("\n");
        
    }
    getch();

}