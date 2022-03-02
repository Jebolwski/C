#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

typedef struct n n;

struct n{
    int x;
    n *next;
};

typedef n node;

node *root;
node *iter;
node *temp;
node *temp1;


int ekle(node *root,int a ){
    if (root==NULL){
        root=(node *)malloc(sizeof(node));
        printf("Root Oluştu \n");
        root->x=a;
        root->next=root;
        printf("Rootun adresi: %i \n",root);
        printf("Rootun içindeki değer: %i \n",root->x);
        return 0;
    }
    if(root->next=root){
        root->next=(node *)malloc(sizeof(node));
        root->next->next=root;
        root->next->x=a;
        printf("Rootun nexti oluşturuldu.\n");
    }
    else{
        iter=root;
        while(iter->next!=root){
            iter=iter->next;
        }
        printf("Geldik1\n");
        iter->next=(node *)malloc(sizeof(node));
        iter->next->x=a;
        iter->next->next=root;
        
    }
    return 0;
}


int sil(node *root,int a){
    if(root==NULL){
        printf("Silinemiyor - Liste Boş...\n");
    }
    else{
        iter=root;
        while(iter->next->x!=a){
            iter=iter->next;
        }
        if(iter->next->x==a){
        temp1=iter->next;
        temp=iter->next->next;
        iter->next=temp;
        free(temp1);
        }
        else{
            printf("Bulunamadı...\n");
        }
    }
    return 0;
}

int bastir(node *root){
    if(root==NULL){
        printf("Liste Boş...\n");
        return 0;
    }
    iter=root;
    while(iter->next!=root){
        iter=iter->next;
        printf("%i",iter->x);
    }
    return 0;

}


int main(){
    ekle(root,1);
    ekle(root,2);
    ekle(root,3);
    
}