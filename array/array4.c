#include <stdio.h>
#include <stdlib.h>



int main(){
    int uzunluk;
    printf("Dizinin uzunlugunu girin : ");
    scanf("%d",&uzunluk);
    int dizi[uzunluk];
    for (int i = 0; i < uzunluk; i++)
    {
        printf("%d. eleman : ",i+1);
        scanf("%d",&dizi[i]);
    }
    int yakinlik=abs(dizi[0]-dizi[1]);
    for (int i = 0; i < uzunluk; i++)
    {
        for (int j = 0; j < uzunluk; j++)
        {
            if(i!=j && yakinlik>abs(dizi[i]-dizi[j])){
                yakinlik = abs(dizi[i]-dizi[j]);
            }
        }
        
    }
    printf("Farklari sifira en yakin iki eleman : %d\n",yakinlik);
        

    int eleman;
    printf("Kacinci elemani silmek istersiniz : ");
    scanf("%d",&eleman);
    dizi[eleman-1]='\0';
    printf("Yeni dizi : ");
    for (int i = 0; i < uzunluk; i++)
    {
        if(dizi[i]!='\0'){
            printf("%d ",dizi[i]);
        }
    }
    for (int i = 0; i < uzunluk; i++)
    {
        for (int j = 0; j < uzunluk-i; j++)
        {
            if(dizi[j]>dizi[j+1]){
                int temp=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=temp;
            }
        }
        
    }
    printf("\nikinci en buyuk eleman : %d",dizi[uzunluk-2]);

    

}