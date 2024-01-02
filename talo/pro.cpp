#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define bolen_buyukluk_ 2

int matrislerden_sonuc_uret(int *matris1,int *matris2);


int main(){
    int matris_buyukluk = 5;
    int bolen_buyukluk = 2;
    const int sonuc_buyukluk = matris_buyukluk - bolen_buyukluk + 1;
    srand(time(NULL));
    int ana_matris[matris_buyukluk][matris_buyukluk];
    int bolen_matris[bolen_buyukluk][bolen_buyukluk];
    int sonuc_matris[sonuc_buyukluk][sonuc_buyukluk];

    for (int i = 0; i < matris_buyukluk; i++)
    {
        for (int j = 0; j < matris_buyukluk; j++)
        {
            ana_matris[i][j]=(rand()%10)+1;
        }
    }

    for (int i = 0; i < bolen_buyukluk; i++)
    {
        for (int j = 0; j < bolen_buyukluk; j++)
        {
            bolen_matris[i][j]=(rand()%10)+1;
        }
    }

    printf("-------Core Matrix-------\n");
    for (int i = 0; i < matris_buyukluk; i++)
    {
        for (int j = 0; j < matris_buyukluk; j++)
        {
            printf("%d ", ana_matris[i][j]);
        }
        printf("\n");
    }
    
    printf("\n-------Input Matrix-------\n");
    for (int i = 0; i < bolen_buyukluk; i++)
    {
        for (int j = 0; j < bolen_buyukluk; j++)
        {
            printf("%d ", bolen_matris[i][j]);
        }
        printf("\n");
    }

    int matris_temp[bolen_buyukluk][bolen_buyukluk];
    for (int i = 0; i < sonuc_buyukluk; i++)
    {
        matris_temp[bolen_buyukluk][bolen_buyukluk]={};
        for (int j = 0; j < sonuc_buyukluk; j++)
        {

            //temp matrisi oluşturma
            int satir=0;
            for (int k = i; k < bolen_buyukluk+i; k++)
            {
                int sutun=0;
                for (int x = j; x < bolen_buyukluk+j; x++)
                {
                    matris_temp[satir][sutun]=ana_matris[k][x];
                    sutun++;
                }
                satir++;
            }
            

            //temp matrisle bolen matrisi çarpma
            int sonuc = matrislerden_sonuc_uret((int *)matris_temp,(int *)bolen_matris);

            //sonucu sonuc_matrise yazma
            sonuc_matris[i][j]=sonuc; 
        }
        
    }
    printf("\n-------Sonuc-------\n");
    for (int i = 0; i < sonuc_buyukluk; i++)
    {
        for (int j = 0; j < sonuc_buyukluk; j++)
        {
            printf("%d ", sonuc_matris[i][j]);
        }
        printf("\n");
    }
    
}

int matrislerden_sonuc_uret(int* matris1, int* matris2) {
    srand(time(NULL));
    return (rand() % 10) + 1;
}