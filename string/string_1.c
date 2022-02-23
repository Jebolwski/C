#include <stdio.h>
#include <stdlib.h>

int uzunlugu(char isim[]){
    int i =0;
    int uzunluk=0;

    while(isim[i]!="\0"){
        i++;
        uzunluk++;
    }


    printf("Girdinin uzunluğu : %i",uzunluk);
    return uzunluk;
}


int tersecevir(char girdi[]){
    int uzunluk = uzunlugu(girdi);
    printf("%i",uzunluk);
    int dizi[uzunluk];
    for(int i=0;i<uzunluk;i++){
        dizi[i]=girdi[uzunluk-i];
    }
    return uzunluk;
}



int main(){

    char isim[30];
    scanf("%s",&isim);
    tersecevir(isim);
    printf("%s",isim);

    printf("İsim : %s",isim);


}