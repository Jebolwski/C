#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
typedef struct n n;

struct n{
    int x;
    n *next;
};

typedef n node;

int main(){
    node *root;
    root = (node *)malloc(sizeof(node));
    root->x=1;
    root->next = (node *)malloc(sizeof(node));
    root->next->x = 2;
    root->next->next = (node *)malloc(sizeof(node));
    root->next->next->x = 3;
    root->next->next->next = NULL;
    node *iter;
    iter = root;
    printf("%d",iter->x);
    iter=iter->next;
    printf("%d",iter->x);
}