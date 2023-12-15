#include <stdio.h>


int main(){
    int dizi_boyut;
    while (dizi_boyut>10 || dizi_boyut<2){
        printf("Dizi boyutunu giriniz : ");
        scanf("%d",&dizi_boyut);
    }
    int dizi[50];
    for (int i = 0; i < dizi_boyut; i++)
    {
        while (dizi[i]>9 || dizi[i]<1){
            printf("Dizinin %d. elemainini giriniz : ",i+1);
            scanf("%d",&dizi[i]);
        }
    }
    int farkli_sayi = 0;
    int bayrak = 0;
    int pivot;
    int break_loop = 1;
    while (break_loop){
        for (int i = 0; i < dizi_boyut; i++){
            if (dizi[i]!=-1){
                int aranan_eleman = dizi[i];
                for (int j = 0; j < dizi_boyut; j++){
                    if (aranan_eleman == dizi[j]){
                        pivot=aranan_eleman;
                        dizi[j] = -1;
                        bayrak = 1;
                    }
                }
                printf("Silincek eleman : %d\n",pivot);
                printf("Diziyi bastir : ");
                for (int i = 0; i < dizi_boyut; i++)
                {
                    printf("%d ",dizi[i]);
                }
                if (bayrak==1){
                    farkli_sayi++;
                }
            }
            printf("\n");
            for (int i = 0; i < dizi_boyut;i++){
                if (dizi[i]!=-1){
                    continue;
                }
                if (i==dizi_boyut-1){
                    break_loop=0;
                }
            }
        }
    }
    printf("Dizideki farkli sayi sayisi : %d",farkli_sayi);
}