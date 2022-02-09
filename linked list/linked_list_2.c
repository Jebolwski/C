#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

typedef struct n n;

struct n{
    int x;
    n *next;
};

typedef n node;

node *ekleme(int num);
node *iter;
node *root;

int main(){
    node *root;
    node *iter;
    root=(node *)malloc(sizeof(node));
    root->x=20;
    root->next=NULL;
    iter=root;
    ekleme(50);
    while(iter->next!=NULL){
        printf("%d",iter->x);
        iter=iter->next;
    }
    printf("%d",iter->x);
    getch();
}

node *ekleme(int num){
    if ((root->x)<num){
        node *root;
        iter->next=(node *)malloc(sizeof(node));
        iter->next->x=num;
        iter->next->next=NULL;
    }
}