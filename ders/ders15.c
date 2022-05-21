#include <stdio.h>

int main()
{

    for (int i = 10; i < 210; i++)
    {
        while (i != 0)
        {
            i = i / 10;
            printf("%d\n ", i % 10);
        }
    }
}