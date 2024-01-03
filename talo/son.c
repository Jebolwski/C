#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int java_uzunlugu = 4;
    int matris_buyukluk = 5;
    srand(time(NULL));
    char random_matris[matris_buyukluk][matris_buyukluk];
    for (int i = 0; i < matris_buyukluk; i++)
    {
        for (int j = 0; j < matris_buyukluk; j++)
        {
            int random_sayi = (rand()%3)+1;
            if (random_sayi==1){
                random_matris[i][j] = 'J';
            }
            else if (random_sayi==2){
                random_matris[i][j] = 'V';
            }
            else{
                random_matris[i][j] = 'A';
            }
        }
    }
    
    printf("----Rastgele matris----\n");
    for (int i = 0; i < matris_buyukluk; i++)
    {
        for (int j = 0; j < matris_buyukluk; j++)
        {
            printf("%c ", random_matris[i][j]);
        }
        printf("\n");
    }
    
    int sayac = 0;
    int saga = 0;
    int sola = 0;
    int capraz = 0;
    int asagi = 0;
    int yukari = 0;
    
    int alt_tire_sayac = 0;
    int alt_tire_matris[matris_buyukluk*matris_buyukluk*matris_buyukluk][2];

    char s_matris[5][5] = {{'J', 'A', 'V', 'A', 'A'},
    {'A', 'A', 'A', 'A', 'V'},
    {'V', 'A', 'V', 'A', 'A'},
    {'A', 'A', 'A', 'A', 'J'},
    {'A', 'V', 'A', 'J', 'A'}};


    printf("----Ornek matris----\n");
    for (int i = 0; i < matris_buyukluk; i++)
    {
        for (int j = 0; j < matris_buyukluk; j++)
        {
            printf("%c ", s_matris[i][j]);
        }
        printf("\n");
    }

    // Soldan sağa doğru kontrol
    for (int i = 0; i < matris_buyukluk; i++) {
        for (int j = 0; j <= matris_buyukluk - java_uzunlugu; j++) {
            if (s_matris[i][j] == 'J' && s_matris[i][j + 1] == 'A' && s_matris[i][j + 2] == 'V' && s_matris[i][j + 3] == 'A') {
                saga++;

                alt_tire_matris[alt_tire_sayac][0]=i;
                alt_tire_matris[alt_tire_sayac][1]=j;
                alt_tire_sayac++;
                alt_tire_matris[alt_tire_sayac][0]=i;
                alt_tire_matris[alt_tire_sayac][1]=j+1;
                alt_tire_sayac++;
                alt_tire_matris[alt_tire_sayac][0]=i;
                alt_tire_matris[alt_tire_sayac][1]=j+2;
                alt_tire_sayac++;
                alt_tire_matris[alt_tire_sayac][0]=i;
                alt_tire_matris[alt_tire_sayac][1]=j+3;
                alt_tire_sayac++;
            }
        }
    }


    // Sağa sola doğru kontrol
    for (int i = 0; i < matris_buyukluk; i++) {
        for (int j = java_uzunlugu - 1; j < matris_buyukluk; j++) {
            if (s_matris[i][j] == 'J' && s_matris[i][j - 1] == 'A' && s_matris[i][j - 2] == 'V' && s_matris[i][j - 3] == 'A') {
                sola++;

                alt_tire_matris[alt_tire_sayac][0]=i;
                alt_tire_matris[alt_tire_sayac][1]=j;
                alt_tire_sayac++;   
                alt_tire_matris[alt_tire_sayac][0]=i;
                alt_tire_matris[alt_tire_sayac][1]=j-1;
                alt_tire_sayac++;
                alt_tire_matris[alt_tire_sayac][0]=i;
                alt_tire_matris[alt_tire_sayac][1]=j-2;
                alt_tire_sayac++;
                alt_tire_matris[alt_tire_sayac][0]=i;
                alt_tire_matris[alt_tire_sayac][1]=j-3;
                alt_tire_sayac++;
            }
        }
    }

    // Yukarıdan aşağı doğru kontrol
    for (int i = 0; i <= matris_buyukluk - java_uzunlugu; i++) {
        for (int j = 0; j < matris_buyukluk; j++) {
            if (s_matris[i][j] == 'J' && s_matris[i + 1][j] == 'A' && s_matris[i + 2][j] == 'V' && s_matris[i + 3][j] == 'A') {
                asagi++;

                alt_tire_matris[alt_tire_sayac][0]=i;
                alt_tire_matris[alt_tire_sayac][1]=j;
                alt_tire_sayac++;
                alt_tire_matris[alt_tire_sayac][0]=i+1;
                alt_tire_matris[alt_tire_sayac][1]=j;
                alt_tire_sayac++;
                alt_tire_matris[alt_tire_sayac][0]=i+2;
                alt_tire_matris[alt_tire_sayac][1]=j;
                alt_tire_sayac++;
                alt_tire_matris[alt_tire_sayac][0]=i+3;
                alt_tire_matris[alt_tire_sayac][1]=j;
                alt_tire_sayac++;
            }
        }
    }

    // Aşağıdan yukarı doğru kontrol
    for (int i = java_uzunlugu - 1; i < matris_buyukluk; i++) {
        for (int j = 0; j < matris_buyukluk; j++) {
            if (s_matris[i][j] == 'J' && s_matris[i - 1][j] == 'A' && s_matris[i - 2][j] == 'V' && s_matris[i - 3][j] == 'A') {
                yukari++;

                alt_tire_matris[alt_tire_sayac][0]=i;
                alt_tire_matris[alt_tire_sayac][1]=j;
                alt_tire_sayac++;
                alt_tire_matris[alt_tire_sayac][0]=i-1;
                alt_tire_matris[alt_tire_sayac][1]=j;
                alt_tire_sayac++;
                alt_tire_matris[alt_tire_sayac][0]=i-2;
                alt_tire_matris[alt_tire_sayac][1]=j;
                alt_tire_sayac++;
                alt_tire_matris[alt_tire_sayac][0]=i-3;
                alt_tire_matris[alt_tire_sayac][1]=j;
                alt_tire_sayac++;
            }
        }
    }

    // Çapraz kontrol - Sol üstten sağ alta
    for (int i = 0; i <= matris_buyukluk - java_uzunlugu; i++) {
        for (int j = 0; j <= matris_buyukluk - java_uzunlugu; j++) {
            if (s_matris[i][j] == 'J' && s_matris[i + 1][j + 1] == 'A' && s_matris[i + 2][j + 2] == 'V' && s_matris[i + 3][j + 3] == 'A') {
                capraz++;

                alt_tire_matris[alt_tire_sayac][0]=i;
                alt_tire_matris[alt_tire_sayac][1]=j;
                alt_tire_sayac++;
                alt_tire_matris[alt_tire_sayac][0]=i+1;
                alt_tire_matris[alt_tire_sayac][1]=j+1;
                alt_tire_sayac++;
                alt_tire_matris[alt_tire_sayac][0]=i+2;
                alt_tire_matris[alt_tire_sayac][1]=j+2;
                alt_tire_sayac++;
                alt_tire_matris[alt_tire_sayac][0]=i+3;
                alt_tire_matris[alt_tire_sayac][1]=j+3;
                alt_tire_sayac++;
            }
        }
    }

    // Çapraz kontrol - Sağ üstten sol alta
    for (int i = 0; i <= matris_buyukluk - java_uzunlugu; i++) {
        for (int j = java_uzunlugu - 1; j < matris_buyukluk; j++) {
            if (s_matris[i][j] == 'J' && s_matris[i + 1][j - 1] == 'A' && s_matris[i + 2][j - 2] == 'V' && s_matris[i + 3][j - 3] == 'A') {
                capraz++;

                alt_tire_matris[alt_tire_sayac][0]=i;
                alt_tire_matris[alt_tire_sayac][1]=j;
                alt_tire_sayac++;
                alt_tire_matris[alt_tire_sayac][0]=i+1;
                alt_tire_matris[alt_tire_sayac][1]=j-1;
                alt_tire_sayac++;
                alt_tire_matris[alt_tire_sayac][0]=i+2;
                alt_tire_matris[alt_tire_sayac][1]=j-2;
                alt_tire_sayac++;
                alt_tire_matris[alt_tire_sayac][0]=i+3;
                alt_tire_matris[alt_tire_sayac][1]=j-3;
                alt_tire_sayac++;
            }
        }
    }

    sayac = sola + saga + capraz + yukari + asagi;

    printf("Ornek matriste asagi dogru %d tane var.\n",asagi);
    printf("Ornek matriste yukari dogru %d tane var.\n",yukari);
    printf("Ornek matriste saga dogru %d tane var.\n",saga);
    printf("Ornek matriste sola dogru %d tane var.\n",sola);
    printf("Ornek matriste capraz %d tane var.\n",capraz);
    printf("Ornek matriste toplam %d tane var.\n",sayac);


    for (int i = 0; i < alt_tire_sayac; i++)
    {
        printf("%d - %d\n",alt_tire_matris[i][0],alt_tire_matris[i][1]);
    }
    
    
    for (int j = 0; j < matris_buyukluk; j++)
    {
        for (int k = 0; k < matris_buyukluk; k++)
        {
            int flag = 0;
            for (int i = 0; i < alt_tire_sayac; i++)
            {
                if (j==alt_tire_matris[i][0] && k==alt_tire_matris[i][1]){
                    flag = 1;
                    break;
                }
            }
            if (flag == 0){
                s_matris[j][k]='_';
            }
        }
    }

    printf("----Ornek matris----\n");
    for (int i = 0; i < matris_buyukluk; i++)
    {
        for (int j = 0; j < matris_buyukluk; j++)
        {
            printf("%c ", s_matris[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
