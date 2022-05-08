#include <stdio.h>
#include <stdlib.h>

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
        root = (n *)malloc(sizeof(n));
        root->x = num;
        root->next = root;
    }
    else
    {
        while (iter->next != NULL)
        {
            iter = iter->next;
        }
        iter->next = (n *)malloc(sizeof(n));
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
        while (iter->next->x == num)
        {
            iter = iter->next;
        }
        iter->next = NULL;
        iter->next = iter->next->next;
    }
}

int bastir()
{
    iter = root;
    if (iter == NULL)
    {
        printf("Bagli liste bos.");
    }
    else if (iter != NULL && iter->next == root)
    {
        printf("%d", iter->x);
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
    ekle(20);
    bastir();
}