#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int uzunluk;
    printf("Dizinin uzunlugunu girin : ");
    scanf("%d", &uzunluk);
    int dizi[uzunluk];
    // for (int i = 0; i < uzunluk; i++)
    // {
    //     printf("%d. eleman : ",i+1);
    //     scanf("%d",&dizi[i]);
    // }
    // int yakinlik=abs(dizi[0]-dizi[1]);
    // for (int i = 0; i < uzunluk; i++)
    // {
    //     for (int j = 0; j < uzunluk; j++)
    //     {
    //         if(i!=j && yakinlik>abs(dizi[i]-dizi[j])){
    //             yakinlik = abs(dizi[i]-dizi[j]);
    //         }
    //     }

    // }
    // printf("Farklari sifira en yakin iki eleman : %d\n",yakinlik);

    // int eleman;
    // printf("Kacinci elemani silmek istersiniz : ");
    // scanf("%d",&eleman);
    // dizi[eleman-1]='\0';
    // printf("Yeni dizi : ");
    // for (int i = 0; i < uzunluk; i++)
    // {
    //     if(dizi[i]!='\0'){
    //         printf("%d ",dizi[i]);
    //     }
    // }
    // for (int i = 0; i < uzunluk; i++)
    // {
    //     for (int j = 0; j < uzunluk-i; j++)
    //     {
    //         if(dizi[j]>dizi[j+1]){
    //             int temp=dizi[j];
    //             dizi[j]=dizi[j+1];
    //             dizi[j+1]=temp;
    //         }
    //     }

    // }
    // printf("\nikinci en buyuk eleman : %d",dizi[uzunluk-2]);

    for (int i = 0; i < uzunluk; i++)
    {
        int random = ceil(rand() / (float)RAND_MAX * 10);
        dizi[i] = random;
    }
    printf("Dizi : ");
    for (int i = 0; i < uzunluk; i++)
    {
        printf("%d ", dizi[i]);
    }
    int mod_sayisi;
    printf("\nButun dizinin kac ile modunun alinmasini istersiniz : ");
    scanf("%d", &mod_sayisi);
    for (int i = 0; i < uzunluk; i++)
    {
        dizi[i] = dizi[i] % mod_sayisi;
    }
    printf("\nModlu dizi : ");
    for (int i = 0; i < uzunluk; i++)
    {
        printf("%d ", dizi[i]);
    }
}