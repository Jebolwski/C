#include <stdlib.h>
#include <stdio.h>
#include <conio.h>


typedef struct n n;

struct n{
    int x;
    n *sol;
    n *sag;
};

typedef n node;

node *root;
node *iter;
node *temp;

node * ekle(node *root,int a){
    if(root==NULL){
        root = (node *)malloc(sizeof(node));
        root->x=a;
        root->sag=NULL;
        root->sol=NULL;
    }
    else{
        if(a>root->x){
            if(root->sag==NULL){
                root->sag=(node *)malloc(sizeof(node));
                root->sag->x=a;
                return root;
            }
            else{
            ekle(root->sag,a);
            return root;
            }
        }
        else if(a<root->x){
            if(root->sol==NULL){
                root->sol=(node *)malloc(sizeof(node));
                root->sol->x=a;
                return root;
            }
            else{
                ekle(root->sol,a);
                return root;
            }
        }
    }
}

void dolas(node *root){
    if (root==NULL){
        return;
    }
    dolas(root->sol);
    printf("%d ",root->x);
    dolas(root->sag);
}


int main(){
    node *root = (node *)malloc(sizeof(node));
    root->sag=(node *)malloc(sizeof(node));

}