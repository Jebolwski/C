#include <stdio.h>



int main(){
    int uzunluk;
    printf("Kare matrisin boyutunu giriniz : ");
    scanf("%d",&uzunluk);
    int dizi[uzunluk][uzunluk];
    printf("%dX%d dizinin elemanlarini giriniz : ",uzunluk,uzunluk);
    for (int i = 0; i < uzunluk; i++)
    {
        for (int j = 0; j < uzunluk; j++)
        {
            printf("\nDizi[%d][%d] : ",i,j);
            scanf("%d",&dizi[i][j]);
        }
        
    }
    
    for (int i = 1; i < uzunluk; i++)
    {
        for (int j = 0; j < i; j++)
        {
            dizi[i][j]=0;
        }
        
    }

    for (int i = 0; i < uzunluk; i++)
    {
        for (int j = 0; j < uzunluk; j++)
        {
            if(j==uzunluk-1){
                printf("%d \n",dizi[i][j]);
            }
            else{
                printf("%d ",dizi[i][j]);
            }
        }
        
    }
    
    for (int i = 0; i < uzunluk; i++)
    {
        for (int j = 0; j < uzunluk; j++)
        {
            if(i==j && dizi[i][j]==1){
                if(i!=j && dizi[i][j]==0){
                    printf("Dizi birim matristir.\n");
                    break;
                    return;
                }
                else{
                    printf("Dizi birim matris degildir.\n");
                    break;
                    return;
                }
            }
            else{
                    printf("Dizi birim matris degildir.\n");
                    break;
                    return;
                }
            
        }
        
    }

}