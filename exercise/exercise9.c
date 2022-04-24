#include <stdio.h>
#include <time.h>
#include <stdlib.h>



void rastgele_cumle(){
    int ozne = rand()%5+1;
    switch (ozne)
    {
    case 1:
        printf("Joey Diaz ");
        break;
    case 2:
        printf("Fury ");
        break;
    case 3:
        printf("Helwani ");
        break;
    case 4:
        printf("Ayse ");
        break;
    case 5:
        printf("Cornellius ");
        break;
    default:
        break;
    }
    int nesne = rand()%5+1;
    switch (nesne)
    {
    case 1:
        printf("Joey Diaz'i ");
        break;
    case 2:
        printf("Fury'yi ");
        break;
    case 3:
        printf("Helwani'yi ");
        break;
    case 4:
        printf("Ayse'yi ");
        break;
    case 5:
        printf("Cornellius'u ");
        break;
    default:
        break;
    }
    int yuklem = rand()%5+1;
    switch (yuklem)
    {
    case 1:
        printf("dovdu.\n");
        break;
    case 2:
        printf("smashledi.\n");
        break;
    case 3:
        printf("yedi.\n");
        break;
    case 4:
        printf("sevdi.\n");
        break;
    case 5:
        printf("izledi.\n");
        break;
    default:
        break;
    }
    
}


int main(){
    for (int i = 0; i < 10; i++)
    {
        rastgele_cumle();
    }
    

}