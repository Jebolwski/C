#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

typedef struct n n;

struct n{
    int x;
    n *sol;
    n *sag;
};

typedef n tree;

tree *root;
tree *iter;
tree *temp;

void ekle(tree *root,int a){
    if(root==NULL){
        root = (tree *)malloc(sizeof(tree));
        root->x=a;
        root->sag=NULL;
        root->sol=NULL;
    }
    else{
        if(a>root->x){
            if(root->sag==NULL){
                root->sag=(tree *)malloc(sizeof(tree));
                root->sag->x=a;
            }
            else{
            ekle(root->sag,a);
            }
        }
        if(a<root->x){
            if(root->sol==NULL){
                root->sol=(tree *)malloc(sizeof(tree));
                root->sol->x=a;
            }
            else{
                ekle(root->sol , a);
            }
        }
    }
}

bool dolas(tree *root){
    if(root==NULL){
        return false;
    }
    dolas(root->sol);
    printf("%d ",root->x);
    dolas(root->sag);
    return true;
}


int main(){

    ekle(root,10);
    ekle(root,20);
    ekle(root,30);
    ekle(root,40);
    dolas(root);

}