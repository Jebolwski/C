#include <stdio.h>



int main(){
    int uzunluk;
    printf("Dizinin uzunlugu : ");
    scanf("%d",&uzunluk);
    int dizi[uzunluk];
    for (int i = 0; i < uzunluk; i++)
    {
        printf("%d. deger : ",i+1);
        scanf("%d",&dizi[i]);
    }

    for (int i = 0; i < uzunluk; i++)
    {
        for (int j = 0; j < uzunluk-i-1; j++)
        {
            if(dizi[j+1]<dizi[j]){
                int temp;
                temp=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=temp;
            }
        }
        
    }
    printf("Sirali dizi : ");
    for (int i = 0; i < uzunluk; i++)
    {
        printf("%d ",dizi[i]);
    }
    if(uzunluk%2==1){
        printf("\nMedyan : %d\n",dizi[uzunluk/2]);
    }
    else{
        printf("\nMedyan : %d\n",(dizi[uzunluk/2]+dizi[(uzunluk/2)-1])/2);
    }
    int counter=0;    
    int mod=0; 
    int mod_deg;   
    for (int i = 0; i < uzunluk; i++)
    {
        for (int j = 0; j < uzunluk; j++)
        {
            if(dizi[i]==dizi[j]){
                counter++;
            }
        }
        if(counter>mod){
            mod_deg=dizi[i];
            int temp=counter;
            counter=mod;
            mod=temp;
        }
        
    }
    printf("Modu : %d",mod_deg);
    



}