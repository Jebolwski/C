#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

typedef struct agac agac;

struct agac{
    int x;
    agac *sol;
    agac *sag;
};

typedef agac a;

a *root;
a *iter;

int ekle(int b){
    if(root==NULL){
        root = (a*)malloc(sizeof(a));
        root->x=b;
        root->sag=NULL;
        root->sol=NULL;
        return 1;
    }
    iter=root;
    while(iter->sag!=NULL && iter->sol!=NULL){
        if(b > iter->x){
            iter=iter->sag;
        }
        else{
            iter=iter->sol;
        }
    }
    if(b > iter->x){
        iter->sag = (a*)malloc(sizeof(a));
        iter->sag->x = b;
        iter->sag->sag = NULL;
        iter->sag->sol = NULL;
    }
    else{
        iter->sol = (a*)malloc(sizeof(a));
        iter->sol->x = b;
        iter->sol->sag = NULL;
        iter->sol->sol = NULL;
    }
}


int bastir(){
    if(root==NULL){
        printf("Ağaç Boş...");
        return 0;
    bastir(root->sag);
    printf("%d ",root->x);
    bastir(root->sol);
    }
}

int main(void){
    ekle(20);
    ekle(25);
    bastir();
    ekle(30);
    bastir();
}