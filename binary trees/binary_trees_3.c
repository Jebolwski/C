#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef struct agac agac;

typedef struct agac
{
    agac *right;
    agac *left;
    int x;
};

typedef agac a;

a *root;
a *iter;

void ekle(int b){
    if(root==NULL){
        root = (a*)malloc(sizeof(a));
        root->x=b;
        root->right=NULL;
        root->left=NULL;
    }
    else{
        iter=root;
        while (iter->right!=NULL && iter->left!=NULL)
        {
            if(b>iter->x){
                iter=iter->right;
            }
            else{
                iter=iter->left;
            }
        }
        
    }
}

void bastir(){
    if(root==NULL){
        printf("Ağaç Boş...\n");
    iter=root;
    while(iter->right!=NULL){
        printf("%d",iter->x);
        iter=iter->right;
    }
    bastir(root->right);
    printf("%d ",root->x);
    bastir(root->left);
    }
}

int sil(int b){
    if(root==NULL)
    {
        printf("Ağaç Boş...");
        return 0;
    }
    iter=root;
    while(iter->left->x!=b || iter->right->x!=b || iter->x!=b)
    {
        if(b > iter->x)
        {
            iter=iter->left;
        }
        else
        {
            iter=iter->right;
        }
    }
    if (iter->right->x==b) 
    {
        iter->right=NULL;
    }
    else if (iter->left->x==b)
    {
        iter->left=NULL;
    }
    else
    {
        printf("Bulunamadı...\n");
        return 0;
    }
}

int main(){
    ekle(3);    
    bastir();
    ekle(4);    
    bastir();
}
