#include <stdio.h>
#include <conio.h>



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
        printf("\nMedyan : %.2f\n",( dizi[uzunluk/2]+dizi[(uzunluk/2)-1])/2.00);
    }
    int counter=0;    
    int mod=0; 
    int mod_deger=0; 
    int temp_mod=0; 
    for (int i = 0; i < uzunluk; i++)
    {
        for (int j = 0; j < uzunluk; j++)
        {
            if(dizi[i]==dizi[j]){
                temp_mod++;
            }
        }
        if(temp_mod>mod){
            mod=temp_mod;
            mod_deger=dizi[i];
        }
        temp_mod=0;
    }
    printf("Dizinin modu : %d\n",mod_deger);
    printf("Modun tekrar sayisi : %d\n",mod);

    printf("Dizinin en buyuk elemani : %d\n",dizi[uzunluk-1]);
    printf("Dizinin en kucuk elemani : %d\n",dizi[0]);
    int toplam=0;
    for (int i = 0; i < uzunluk; i++)
    {
        toplam+=dizi[i];
    }
    printf("Dizinin aritmetik ortalamasi : %.2f",(double) toplam/uzunluk);
    getch();

}