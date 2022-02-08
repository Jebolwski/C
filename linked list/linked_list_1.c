#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

typedef struct n{
    int x;
    n *next;
}n;

typedef n node;

int main(){
    node *root;
    root=(node *)malloc(sizeof(node));
    for(int i=0;i<5;i++)
    {
        root->x=i;
        root->next=(node *)malloc(sizeof(node));
        root=root->next;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d",root);
        root=root->next;
    }
    
}