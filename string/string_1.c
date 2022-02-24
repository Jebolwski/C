#include <stdio.h>
#include <stdlib.h>

int uzunlugu(char isim[]){
    int i = 0;
    int uzunluk=0;

    for(i=0;i<10;i++){
        printf("%c",isim[i]);
        uzunluk++;
    }

    printf("Girdinin uzunluğu : %i",uzunluk);

    return uzunluk;
}


int tersecevir(char girdi[]){
    int uzunluk = uzunlugu(girdi);
    int dizi[uzunluk];
    for(int i=0;i<uzunluk;i++){
        dizi[i]=girdi[uzunluk-i];
    }
    printf("%s",dizi);
    return uzunluk;
}



int main(){

    char isim[10];
    printf("Bir isim giriniz :");
    scanf("%s",&isim);
    uzunlugu(isim);
    


}