#include<stdio.h>

int main(){
    int i=0;

    int sayfa=0,gun=0,u=10;
    while(sayfa<2800){
        sayfa=sayfa+u;
        u=u+5;
        gun++;
    }
    printf("Okunan gun sayisi : %d\n",gun);
    while(1){
        i++;
        if(i%2==1) printf("*");
        else printf("+");
        if(i==100){
            break;
        }
    }
    printf("\n");
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