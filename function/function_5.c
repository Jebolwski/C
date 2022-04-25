#include <stdio.h>
#include <conio.h>
#include <string.h>


int kucuk_harfler(char kelime[]){
    for (int i = 0; i < strlen(kelime); i++)
    {
        if (65<=kelime[i] && kelime[i]<=90){
            kelime[i] = kelime[i] + 32;
        }
    }
    printf("Kucuk hali : ");
    for (int i = 0; i < strlen(kelime); i++)
    {
        printf("%c",kelime[i]);
    }
    
    getch();
}

int main(){

    char kelime[100];
    printf("Bir cumle ya da kelime girin : ");
    fgets(kelime,100,stdin);
    kucuk_harfler(kelime);
}