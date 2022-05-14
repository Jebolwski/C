#include <stdio.h>
#include <string.h>

void harf_mi(char girdi[], int len)
{
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (90 >= girdi[i] && girdi[i] >= 65 || (127 >= girdi[i] && girdi[i] >= 97))
        {
            count++;
        }
    }
    if (count == len)
    {
        printf("Bu girdinin hepsi harflerden olusuyor.\n");
    }
    else
    {
        printf("Bu girdinin hepsi harflerden olusmuyor. (%d!=%d)\n", count, len);
    }
}

void rakam_mi(char girdi[], int len)
{
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (57 >= girdi[i] && girdi[i] >= 48)
        {
            count++;
        }
    }
    if (count == len)
    {
        printf("Bu girdinin hepsi rakamlardan olusuyor.");
    }
    else
    {
        printf("Bu girdinin hepsi rakamlardan olusmuyor. (%d!=%d)", count, len);
    }
}
int main()
{
    char girdi[50];
    printf("Girdi : ");
    scanf("%s", girdi);
    harf_mi(girdi, strlen(girdi));
    rakam_mi(girdi, strlen(girdi));
}