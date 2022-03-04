#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

typedef struct n n;

struct n{
    int x;
    n *next;
};

typedef n node;

node *root=NULL;
node *iter=NULL;
node *temp=NULL;
node *temp1=NULL;


int ekle(int a){
    if (root==NULL){
        root=(node *)malloc(sizeof(node));
        root->x=a;
        root->next=root;
        return 1;
    }
    
    else{ 

        if(root->next==root){
        root->next=(node *)malloc(sizeof(node));
        root->next->next=root;
        root->next->x=a;
        }

        else{
            iter=root;
            while(iter->next!=root){
                iter=iter->next;
            }
            iter->next=(node *)malloc(sizeof(node));
            iter->next->x=a;
            iter->next->next=root;

        }
    }
    return 0;
}

int sil(int a){
    if(root->x==a){
        root=root->next;
    }
    if(root==NULL){
        printf("Silinemiyor - Liste Boş...\n");
    }
    else{
        iter=root;
        if(root->x==a){
            temp = root;
            root=root->next;
            free(temp);
        }
        while(iter->next->x!=a){
            iter=iter->next;
            if (iter->next=root){
                printf("Bulunamadı... - %i\n",a);
                return 1;
            }
        }
        if(iter->next->x==a){
        temp1=iter->next;
        temp=iter->next->next;
        iter->next=temp;
        free(temp1);
        }
    }
    return 0;
}

int bastir(){
    if(root==NULL){
        printf("Liste Boş...\n");
        return 0;
    }
    iter=root;
    printf("Liste : %i ",iter->x);
    while(iter->next!=root){
        iter=iter->next;
        printf("%i ",iter->x);
    }
    return 0;

}


int main(){
    sil(1);
    ekle(4);
    bastir();
    
}