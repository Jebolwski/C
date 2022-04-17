#include <stdio.h>
#include <conio.h>


int main(){
    int num;
    printf("Enter triangles height : ");
    scanf("%d",&num);
    printf("\n");
    for (int i = 0; i < num; i++)
    {
        printf("*");
        for (int j = 0; j < i; j++)
        {
            printf(" ");
            if(i==num-1 || i==0 || j==i-1){
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