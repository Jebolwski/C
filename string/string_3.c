#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <fenv.h>

// void ikikere(char isim[]){
//     int uzunluk = strlen(isim);
//     char yeni[uzunluk*2];
//     for(int i=0;i<uzunluk;i++){
//         yeni[i]=isim[i];
//     }
//     for(int i=uzunluk-1;i<uzunluk*2;i++){
//         yeni[i]=isim[i];
//     }
//     for(int i=0;i<uzunluk*2;i++){
//         printf("%s",yeni[i]);
//     }
// }


int main(){
    printf("int buyuklugu : %d\n",sizeof(int));
    printf("short int buyuklugu : %d\n",sizeof(short int));
    printf("long buyuklugu : %d\n",sizeof(long));
    printf("long int buyuklugu : %d\n",sizeof(long int));
    printf("long buyuklugu : %d\n",sizeof(long));
    printf("long double buyuklugu : %d\n",sizeof(long double));
    printf("char buyuklugu : %d\n",sizeof(char));
    int result_min = pow(2,31)-1;
    int result_max = -1*(pow(2,31));
    printf("min : %d\nmax : %d",result_min ,result_max);
    // char isim[30];
    // printf("Isminizi giriniz : ");
    // scanf("%s",isim);
    // printf("\nGirdiginiz isim : %s\n",isim);
    // ikikere(isim);
}