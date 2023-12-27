#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int bolum=2;
    int ogrenci=6;
    int ders=4;
    int sinav_sayisi=2;
    srand(time(NULL));

    int matris1[ogrenci][ders][2];
    int matris2[ogrenci][ders][2];

    //notları atama
    for (int i = 0; i < ogrenci; i++)
    {
        for (int j = 0; j < ders; j++)
        {
            for (int k = 0; k < sinav_sayisi; k++)
            {
                int not = rand() % 101;
                matris1[i][j][k] = not;
            }
        }
    }
    printf("---- Matris 1 ----\n");
    for (int i = 0; i < ogrenci; i++)
    {
        for (int j = 0; j < ders; j++)
        {
            printf("%d %d | ",matris1[i][j][0],matris1[i][j][1]);
        }
        printf("\n");
    }
    //notları atama
    for (int i = 0; i < ogrenci; i++)
    {
        for (int j = 0; j < ders; j++)
        {
            for (int k = 0; k < sinav_sayisi; k++)
            {
                int not = rand() % 101;
                matris2[i][j][k] = not;
            }
        }
    }

    printf("\n---- Matris 2 ----\n");
    for (int i = 0; i < ogrenci; i++)
    {
        for (int j = 0; j < ders; j++)
        {
            printf("%d %d | ",matris2[i][j][0],matris2[i][j][1]);
        }
        printf("\n");
    }

    

    float ortalama=0;
    float uc_ders_ortalama=0;
    printf("\n---- Matris 1 ortalamalar ----\n");
    int matris1_maks_satir=0;
    float maksi=0.0;
    for (int i = 0; i < ogrenci; i++)
    {
        uc_ders_ortalama=0;
        for (int j = 0; j < ders; j++)
        {
            uc_ders_ortalama += (matris1[i][j][0]+matris1[i][j][1])/2.0;
        }
        ortalama=uc_ders_ortalama/3.0;
        printf("Ogrenci %d ortalama : %f\n",i+1,ortalama);
        if (ortalama>maksi){
            matris1_maks_satir=i;
            maksi=ortalama;
        }
    }
    
    ortalama=0;
    uc_ders_ortalama=0;
    int matris2_maks_satir=0;
    maksi=0.0;
    printf("\n---- Matris 2 ortalamalar ----\n");
    for (int i = 0; i < ogrenci; i++)
    {
        uc_ders_ortalama=0;
        for (int j = 0; j < ders; j++)
        {
            uc_ders_ortalama += (matris2[i][j][0]+matris2[i][j][1])/2.0;
        }
        ortalama=uc_ders_ortalama/3.0;
        printf("Ogrenci %d ortalama : %f\n",i+1,ortalama);
        if (ortalama>maksi){
            matris2_maks_satir=i;
            maksi=ortalama;
        }
    }
    printf("\nMatris 1 maksimum : %d. satir\n",matris1_maks_satir);
    printf("Matris 2 maksimum : %d. satir\n",matris2_maks_satir);

    //değiştirme
    int matris1_maks_dizi[3][2];
    int matris2_maks_dizi[3][2];

    for (int i = 0; i < ders; i++)
    {
        matris1_maks_dizi[i][0] = matris1[matris1_maks_satir][i][0];
        matris1_maks_dizi[i][1] = matris1[matris1_maks_satir][i][1];
    }

    

    for (int i = 0; i < ders; i++)
    {
        matris2_maks_dizi[i][0] = matris2[matris2_maks_satir][i][0];
        matris2_maks_dizi[i][1] = matris2[matris2_maks_satir][i][1];
    }
    

    for (int i = 0; i < ders; i++)
    {
        matris2[matris2_maks_satir][i][0]=matris1_maks_dizi[i][0];
        matris2[matris2_maks_satir][i][1]=matris1_maks_dizi[i][1];
    }

    for (int i = 0; i < ders; i++)
    {
        matris1[matris1_maks_satir][i][0]=matris2_maks_dizi[i][0];
        matris1[matris1_maks_satir][i][1]=matris2_maks_dizi[i][1];
    }
    
    printf("\n---- Yeni Matris 1 ----\n");
    for (int i = 0; i < ogrenci; i++)
    {
        for (int j = 0; j < ders; j++)
        {
            printf("%d %d | ",matris1[i][j][0],matris1[i][j][1]);
        }
        printf("\n");
    }

    printf("\n---- Yeni Matris 2 ----\n");
    for (int i = 0; i < ogrenci; i++)
    {
        for (int j = 0; j < ders; j++)
        {
            printf("%d %d | ",matris2[i][j][0],matris2[i][j][1]);
        }
        printf("\n");
    }

    return 0;
}