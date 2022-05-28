#include <stdio.h>

int sayi_toplam(int n)
{
    static int a = 0;
    static int toplam = 0;
    if (n > a)
    {
        a++;
        toplam = toplam + a;
        sayi_toplam(n);
    }
    else
    {
        return toplam;
    }
}

int fibonacci(int n)
{
    static int count = 0;
    static int a = 1;
    static int b = 1;
    static int c;
    if (n > count)
    {
        int temp;
        temp = b;
        b = a + b;
        a = temp;
        c = a + b;
        printf("%d ", a);
        count = count + 1;
        fibonacci(n);
    }
    else
    {
        return 0;
    }
}

int factorial(int n)
{
    static int toplam = 1;
    if (n == 0 || n == 1)
    {
        return toplam;
    }
    else
    {
        toplam *= n;
        n = n - 1;
        factorial(n);
    }
}

int main()
{
    int num;
    printf("Numara : ");
    scanf("%d", &num);
    printf("Sayi toplamlari : %d\n", sayi_toplam(num));
    printf("Fibonacci(%d) : ", num);
    fibonacci(num);
    printf("\nFaktoriyel(%d) : %d ", num, factorial(num));
}