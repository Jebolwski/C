#include <stdio.h>
#include <conio.h>



void main(){

    for(int i=1;i<=255;i++){
        printf("%c %d\n",i,i);
    }
    printf("Enter a character : ");
    int x = getchar();
    printf("\n");
    switch (x)
    {
    case 'x':case 'X':
        printf("Bitti");
        getch();
        return;
        break;
    case 'a':case 'A':
        printf("A girdin.");
        break;
    default:
        printf("Default");
        break;
    }
    
    getch();

}