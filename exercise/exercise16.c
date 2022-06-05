#include <stdio.h>
#include <string.h>

int cumle_ters_bosluk(char cumle[100], char cumle1[200])
{
    int counter = 0;
    for (int i = 0; i < (strlen(cumle) * 2) - 1; i = i + 2)
    {
        cumle1[i] = cumle[strlen(cumle) - counter - 1];
        cumle1[i + 1] = ' ';
        counter++;
    }
}

int main()
{
    char cumle[100];
    char cumle1[200];
    printf("Bir cumle giriniz : ");
    scanf("%s", cumle);
    cumle_ters_bosluk(cumle, cumle1);
    printf("Ters ve bosluku hali : %s\n", cumle1);
}