#include <stdio.h>

int main()
{
    int counter = 0;
    for (int i = 0; i < 5; i++)
    {
        counter++;

        for (int j = 5; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < i * 2 + 1; k = k + 2)
        {
            printf("%d ", counter + k);
        }
        for (int a = 5; a > i; a--)
        {
            printf(" ");
        }
        printf("\n");
    }
}