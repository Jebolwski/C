#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int num;
    printf("Sezar sifrelemede kac birim degissin : ");
    scanf("%d", &num);

    char girdi[100];
    printf("Sifrelenecek girdi : ");
    scanf("%s", girdi);
    int rando = num + ((float)(rand() / RAND_MAX)) * 10;
    printf("%d", rando);
    num = rando % 255;

    for (int i = 0; i < strlen(girdi); i++)
    {
        girdi[i] = (girdi[i] + num) % 255;
        printf("%c", girdi[i]);
    }
}