#include <stdio.h>



int main(){
    int uzunluk;
    
    printf("Dizilerin uzunluklari : ");
    scanf("%d",&uzunluk);
    int dizi1[uzunluk];
    int dizi2[uzunluk];
    int dizi3[uzunluk*2];
    printf("Birinci dizinin girdileri : ");
    for (int i = 0; i < uzunluk; i++)
    {
        printf("%d. girdi : ",i+1);
        scanf("%d",&dizi1[i]);
    }
    printf("Ikinci dizinin girdileri : ");
    for (int i = 0; i < uzunluk; i++)
    {
        printf("%d. girdi : ",i+1);
        scanf("%d",&dizi2[i]);
    }


    for (int i = 0; i < uzunluk; i++)
    {
        dizi3[i]=dizi1[i];
    }
    for (int i = 0; i < uzunluk; i++)
    {
        dizi3[i+uzunluk]=dizi2[i];
    }

    

    for (int i = 0; i < uzunluk*2; i++)
    {
        for (int j = 0; j < uzunluk*2-i-1; j++)
        {
            if (dizi3[j+1]>dizi3[j])
            {
                int temp=dizi3[j];
                dizi3[j]=dizi3[j+1];
                dizi3[j+1]=temp;
            }
        }
    }

    printf("Birlesmis dizinin sirali hali : ");
    for (int i = 0; i < uzunluk*2; i++)
    {
        printf("%d ",dizi3[i]);
    }
    
    printf("Dizi elemanlarinin frekanslari : \n");
    for (int i = 0; i < uzunluk*2; i++)
    {
        int sayi=0;
        for (int j = 0; j < uzunluk*2; j++)
        {
            if(dizi3[i]==dizi3[j]){
                sayi++;
            }
        }
        printf("%d. elemanin (%d) tekrar sayisi : %d\n",i+1,dizi3[i],sayi);
        sayi=0;                
    }
    
    
    
}