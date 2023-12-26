#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    while (1){
        bas:
        srand(time(NULL));
        int n=7;
        int matris[n][n];
        int satirsondeger,sutunsondeger,sifirtoplami=0,birtoplami=0;

        matris[0][0]=1;
        matris[n-1][n-1]=1;
        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){
                if(i==0 && j==0){
                    continue;
                }
                if(i==n-1 && j==n-1){
                    continue;
                }
                matris[i][j]=rand()%2;

                if(matris[i][j]==0){
                    sifirtoplami++;

                }
                if(matris[i][j]==1){
                    birtoplami++;
                }
            }

        }

        while(sifirtoplami>n*n*0.27){

            int a=rand()%n;
            int b=rand()%n;

            if(matris[a][b]==0){
                matris[a][b]=1;
            sifirtoplami--;
            birtoplami++;
            }

        }
            while(sifirtoplami<n*n*0.2){
            
            int a=rand()%n;
            int b=rand()%n;

            if(matris[a][b]==1){
                matris[a][b]=0;
            sifirtoplami++;
            birtoplami--;
            }

        }
        printf("toplam sifir sayisi = %d\n",sifirtoplami);
        printf("toplam bir sayisi = %d\n",birtoplami+2);


        for (int i=0;i<n;i++){

            for(int j=0;j<n;j++){
                printf("%d \t",matris[i][j]);
            }
            printf("\n");    
        }

        int pozisyon[2] = {0,0};
        int pozisyon1[2] = {0,0};
        int x = 2;
        while (1){
            printf("Pozisyon : %d %d | Iterasyon : %d\n ", pozisyon[0],pozisyon[1],x-1);
            int olasiliklar[8][2];

            //sağ-yukarı
            olasiliklar[0][0]=pozisyon[0]+2;
            olasiliklar[0][1]=pozisyon[1]+1;

            //sağ-aşağı
            olasiliklar[1][0]=pozisyon[0]+2;
            olasiliklar[1][1]=pozisyon[1]-1;

            //yukarı-sağ
            olasiliklar[2][0]=pozisyon[0]+1;
            olasiliklar[2][1]=pozisyon[1]+2;

            //yukarı-sol
            olasiliklar[3][0]=pozisyon[0]-1;
            olasiliklar[3][1]=pozisyon[1]+2;

            //aşağı-sağ
            olasiliklar[4][0]=pozisyon[0]+1;
            olasiliklar[4][1]=pozisyon[1]-2;

            //aşağı-sol
            olasiliklar[5][0]=pozisyon[0]-1;
            olasiliklar[5][1]=pozisyon[1]-2;

            //sol-aşağı
            olasiliklar[6][0]=pozisyon[0]-2;
            olasiliklar[6][1]=pozisyon[1]+1;

            //sol-yukarı
            olasiliklar[7][0]=pozisyon[0]-2;
            olasiliklar[7][1]=pozisyon[1]-1;


            int dogru_olasiliklar[8][2];

            int dogru_olasilik_sayac=0;
            for (int i = 0; i < 8; i++)
            {
                if (olasiliklar[i][0]>=0 && olasiliklar[i][1]<=0 && !(olasiliklar[i][0]==0 && olasiliklar[i][1]==0) && olasiliklar[i][0]<=n-1 && olasiliklar[i][1]>=((n-1)*-1) && matris[abs(olasiliklar[i][1])][abs(olasiliklar[i][0])]==1){    
                    dogru_olasiliklar[dogru_olasilik_sayac][0]=olasiliklar[i][0];
                    dogru_olasiliklar[dogru_olasilik_sayac][1]=olasiliklar[i][1];
                    dogru_olasilik_sayac++;
                }
            }

            printf("--- Olasiliklar ---\n"); 
            for (int i = 0; i < dogru_olasilik_sayac; i++)
            {
                printf("x, y : %d, %d\n",dogru_olasiliklar[i][0],dogru_olasiliklar[i][1]);
            }

            //çözüm üretilemezse
            if (dogru_olasilik_sayac==0){
                for (int i=0;i<n;i++){
                    for(int j=0;j<n;j++){
                        printf("%d \t",matris[i][j]);
                    }
                    printf("\n");    
                }
                printf("Cozum uretilemedi, gidecegi yer yok.\nYeniden deneniyor...\n");
                goto bas;
            }


            for (int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    printf("%d \t",matris[i][j]);
                }
                printf("\n");    
            }

            int index = rand()%dogru_olasilik_sayac;

            

            for (int i = 0; i < dogru_olasilik_sayac; i++)
            {
                if ((abs(dogru_olasiliklar[i][0])==n-1 && abs(dogru_olasiliklar[i][1])==n-1)){
                    printf("Pozisyon : %d %d | Iterasyon : %d\n ", pozisyon[0],pozisyon[1],x-1);
                    pozisyon1[0]=n-1;
                    pozisyon1[1]=n-1;

                    pozisyon[0]=n-1;
                    pozisyon[1]=(n-1)*-1;

                    matris[pozisyon1[0]][pozisyon1[1]]=x;
                    x++;
                    printf("Cozum uretildi.\n");
                    for (int i=0;i<n;i++){
                        for(int j=0;j<n;j++){
                            printf("%d \t",matris[i][j]);
                        }
                        printf("\n");    
                    }
                    return 0;
                }
            }
            
            //yeni pozisyona atama
            pozisyon[0]=dogru_olasiliklar[index][0];
            pozisyon[1]=dogru_olasiliklar[index][1];

            pozisyon1[0]=abs(dogru_olasiliklar[index][1]);
            pozisyon1[1]=abs(dogru_olasiliklar[index][0]);

            matris[pozisyon1[0]][pozisyon1[1]]=x;
            x++;
            
        }

    }
    
    return 0;
}