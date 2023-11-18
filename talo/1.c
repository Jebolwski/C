#include <stdio.h>
#include <stdlib.h>

int main(){
    //ondalıklı sayı oluşturma
    double numara = 201229083;
    printf("Ondalikli numara : %f\n",numara/1000000);

    //ondalıklı kısmı tam sayıya çevirme
    double num = numara/1000000;
    int tam_sayi_kismi = (int)numara/1000000;
    numara = numara - tam_sayi_kismi*1000000;

    //çevrilmiş sayıyının rakamlarını toplama
    int toplam=0;
    int numara_int = (int)numara;
    int a;
    while(numara_int>0)    
    {    
        a=numara_int%10;    
        toplam=toplam+a;    
        numara_int=numara_int/10;    
    }    
    printf("'%i' sayisindaki rakamlarin toplami : %i\n",(int) numara,(int)toplam);
}