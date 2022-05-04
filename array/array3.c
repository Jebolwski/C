#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int faktoriyel(int num){
    int result=1;
    for (int i = 1; i <= num; i++)
    {
        result=result*i;
    }
    return result;
}


int main(){
    int A;
    int B;
    printf("%d",faktoriyel(6));
    printf("\nAXB boyutunda matrisin A degerini girin : ");
    scanf("%d",&A);
    printf("AXB boyutunda matrisin B degerini girin : ");
    scanf("%d",&B);
    int sonuc1 = faktoriyel(A+B-2)/faktoriyel(A-1)/faktoriyel(B-1);
    printf("%dX%d matrisinde sol ustten sag alta gitmek icin yol sayisi : %d\n",A,B,sonuc1);
    int uzunluk;
    printf("Dizi elemanlarinin sayisi : ");
    scanf("%d",&uzunluk);
    int dizi[uzunluk];
    printf("Dizinin elemanlarini girin : \n");
    for (int i = 0; i < uzunluk; i++)
    {
        printf("%d. eleman : ",i+1);
        scanf("%d",&dizi[i]);
    }
    int en_buyuk_fark=0;
    int el1=0;
    int el2=0;
    for (int i = 0; i < uzunluk; i++)
    {
        for (int j = i; j < uzunluk; j++)
        {
            if(dizi[j]>dizi[i] && en_buyuk_fark<dizi[j]-dizi[i])
            {
                en_buyuk_fark=dizi[j]-dizi[i];
                el1=dizi[j];
                el2=dizi[i];
            }
        }
    }
    printf("En buyuk fark : %d (%d,%d)\n",en_buyuk_fark,el1,el2);

    for (int i = 0; i < uzunluk; i++)
    {
        if(dizi[i]%2==0){
            printf("%d ",dizi[i]);
        }
    }
    for (int i = 0; i < uzunluk; i++)
    {
        if(dizi[i]%2==1){
            printf("%d ",dizi[i]);
        }
    }
    int num1;
    int num2;
    int uzaklik=1000;
    printf("\nistediginiz birinci numara : ");
    scanf("%d",&num1);
    printf("istediginiz ikinci numara : ");
    scanf("%d",&num2);
    for (int i = 0; i < uzunluk; i++)
    {
        for (int j = 0; j < uzunluk; j++)
        {
            if(((dizi[i]==num1 && dizi[j]==num2) || (dizi[j]==num1 && dizi[i]==num2))  && abs(i-j)<uzaklik){
                    uzaklik=abs(i-j);
            }
        }
        
    }
    printf("%d ile %d arasi en kisa uzaklik : %d",num1,num2,uzaklik);
    

}