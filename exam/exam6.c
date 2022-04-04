#include<stdio.h>

int main(){
    int i=0;
    while(1){
        i++;
        if(i%2==0) printf("*");
        else printf("+");
    }

    for(int i=-4;i<6;i++){
        printf("%d ",i);
    }
    printf("\n");


    printf("%d\n",sizeof(float));

    double x;
    double a=3,b=2;
    x=a/b;
    printf("%2.1lf",(int)x);

    
}