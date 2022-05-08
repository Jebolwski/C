#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct n n;

struct n
{
    int x;
    n *next;
};
typedef n node;

node *root;
node *iter;

int ekle(int num)
{
    iter = root;
    if (root == NULL)
    {
        root = (node *)malloc(sizeof(node));
        root->x = num;
        root->next = root;
    }
    else
    {
        while (iter->next != NULL)
        {
            iter = iter->next;
        }
        iter->next = (node *)malloc(sizeof(node));
        iter->next->x = num;
        iter->next->next = root;
    }
}

int sil(int num)
{
    iter = root;
    if (root == NULL)
    {
        printf("Bağlı liste boş.");
    }
    else
    {
        while (iter->next->x != num)
        {
            iter = iter->next;
        }
        node *a = iter->next;
        iter->next = iter->next->next;
        free(a);
    }
}

int bastir()
{
    iter = root;
    if (iter == NULL)
    {
        printf("Bagli liste bos.");
    }
    else
    {
        while (iter->next != root)
        {
            printf("%d ", iter->x);
            iter = iter->next;
        }
        printf("%d", iter->x);
    }
}

int main()
{
    ekle(10);
    sil(10);
    ekle(20);
    ekle(30);
    bastir();
}