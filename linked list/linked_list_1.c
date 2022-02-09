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
    root=(node *)malloc(sizeof(node));
    node *iter;
    iter=root;
    for(int i=0;i<5;i++)
    {
        root->x=i;
        root->next=(node *)malloc(sizeof(node));
        root=root->next;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",iter->x);
        iter=iter->next;
    }
    
}