#include <stdio.h>
#include <string.h>

int main()
{
    char *iskambil1[4] = {"kupa", "karo", "ayaa", "evee"};
    char *iskambil[52];
    for (int i = 1; i <= 52; i++)
    {
        int sayi = ((i - 1) % 13) + 1;
        iskambil[i] = iskambil1[((i - 1) / 13)];
    }
    for (int i = 1; i <= 52; i++)
    {
        int sayi = ((i - 1) % 13) + 1;
        printf("%s %d\n", iskambil[i], sayi);
    }
}