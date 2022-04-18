#include <stdio.h>
#include <math.h>
#include <conio.h>


int main(){
    int num;
    printf("Enter triangles height : ");
    scanf("%d",&num);
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
    int num1;
    printf("Enter a num : ");
    scanf("%d",&num1);
    for (int i = 1; i < 120; i++)
    {
        int a = pow(3,i);
        if(num1==a){
            printf("Bu sayi 3 un %d. ussu.",i);
            break;
        };
        if(i==119){
            printf("Bu sayi 3 un ussu degil.");
            break;
        }
    }

    int num2;
    printf("\nEnter a num : ");
    scanf("%d",&num2);
    int total=0;
    int a = 10;
    for (int i = 1; i <= num2; i++)
    {
        total=total+a;
        a=a+10;
        printf("%d ortalama : %f\n",i,(float) total/i);
    }
    
    
    getch();


}