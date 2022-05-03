#include <stdio.h>
#include <conio.h>



int main(){
    int uzunluk;
    printf("Dizi elemanlarinin sayisi : ");
    scanf("%d",&uzunluk);
    int dizi[uzunluk];
    printf("Dizinin elemanlarini girin : \n");
    for (int i = 0; i < uzunluk; i++)
    {
        printf("%d. eleman : ",i+1);
        scanf("%d",&dizi[i]);
    }
    int en_buyuk_fark=0;
    int el1=0;
    int el2=0;
    for (int i = 0; i < uzunluk; i++)
    {
        for (int j = i; j < uzunluk; j++)
        {
            if(dizi[j]>dizi[i] && en_buyuk_fark<dizi[j]-dizi[i])
            {
                en_buyuk_fark=dizi[j]-dizi[i];
                el1=dizi[j];
                el2=dizi[i];
            }
        }
    }
    printf("En buyuk fark : %d (%d,%d)\n",en_buyuk_fark,el1,el2);

    for (int i = 0; i < uzunluk; i++)
    {
        if(dizi[i]%2==0){
            printf("%d ",dizi[i]);
        }
    }
    for (int i = 0; i < uzunluk; i++)
    {
        if(dizi[i]%2==1){
            printf("%d ",dizi[i]);
        }
    }
    
    

}