#include <stdio.h>
#include <string.h>

int main()
{

    char string[30];
    printf("Bir kelime girin : ");
    scanf("%s", &string);
    int real_freq = 0;
    char real_freq_char;
    for (int i = 0; i < strlen(string); i++)
    {
        int freq = 0;
        for (int j = 0; j < strlen(string); j++)
        {
            if (string[i] == string[j])
            {
                freq++;
            }
        }
        if (freq > real_freq)
        {
            real_freq = freq;
            real_freq_char = string[i];
        }
    }
    printf("%c : %d", real_freq_char, real_freq);

    int sayi;
    printf("\nBir sayi giriniz : ");
    scanf("%d", &sayi);
    while (sayi != 0)
    {
        printf("%d", sayi % 10);
        sayi = sayi / 10;
    }
    int month;
    printf("\nBir ayin sayisini giriniz : ");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Bu ayda 31 gun vardir.");
        break;
    case 2:
        printf("Bu ayda 28/29 gun vardir.");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        break;

    default:
        printf("Yanlis girdi.");
        break;
    }
}