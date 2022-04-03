#include <stdio.h>
#include <conio.h>


int main(){
    for(int i=100;i<1000;i++){
        int birler = i%10;
        int onlar = (i/10)%10;
        int yuzler = i/100;
        if(onlar!=birler && birler!=yuzler && birler!=yuzler){
        printf("%d\n",i);
        }
    }
    int para;
    printf("Kac para cekmeyi istiyorsunuz ?");
    scanf("%d",&para);

    int yuz=0; 
    int on=0; 
    int bir=0; 
        while(para>0){
            while(para>100){
                para=para-100;
                yuz++;
            }
            while(para>=10){
                para=para-10;
                on++;
            }
            while(para>0){
                para=para-1;
                bir++;
            }
        }
    
    printf("%d Yuzluk\n%d Onluk\n%d Birlik",yuz,on,bir);
    getch();
}