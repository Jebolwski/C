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

void cesar_sifreleme(char kelime[]){
    
    for (int i = 0; i < strlen(kelime); i++)
    {
        if (65<=kelime[i]<=90 || 97<=kelime[i]<=122){
            if(kelime[i]==90){
               kelime[i] = kelime[i] + 7; 
            }
            else if (kelime[i]==122)
            {
                kelime[i] = kelime[i] - 57;
            }
                kelime[i] = kelime[i] + 1;
        }
    }
    printf("Ceasar sifreli hali : ");
    for (int i = 0; i < strlen(kelime); i++)
    {
        printf("%c",kelime[i]);
    }

    getch();
}

void rot_sifreleme(char kelime[]){
    
    for (int i = 0; i < strlen(kelime); i++)
    {
        if (65<=kelime[i]<=90 || 97<=kelime[i]<=122){
            if(65<=kelime[i]<=78){
                kelime[i] = kelime[i] + 13; 
            }
            else if (78<=kelime[i]<=90)
            {
                kelime[i] = kelime[i] - 13;
            }
            else if (90<=kelime[i]<=103)
            {
                kelime[i] = kelime[i] + 13;
            }
            else{
                kelime[i] = kelime[i] - 13; 
            }
        }
    }
    printf("\nRot sifreli hali : ");
    for (int i = 0; i < strlen(kelime); i++)
    {
        printf("%c",kelime[i]);
    }

    getch();
}

void gercek_sifreleme(char kelime[]){
    
    for (int i = 0; i < strlen(kelime); i++)
    {
        if (65<=kelime[i]<=90 || 97<=kelime[i]<=122){
            int random = (int) rand()%26;
            kelime[i] = kelime[i]+random;
        }
    }
    printf("\nGercek sifreli hali : ");
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
    cesar_sifreleme(kelime);
    rot_sifreleme(kelime);
    gercek_sifreleme(kelime);
}