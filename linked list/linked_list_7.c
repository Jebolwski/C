#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef struct liste liste;

typedef struct liste
{
    liste *next;
    int x;
};
typedef liste list;

list *root;
list *iter;
list *temp;

void push(int a){
    if(root==NULL){
        root = (list *)malloc(sizeof(list));
        root->x=a;
        root->next=NULL;
    }
    else{
        iter=root;
        while(iter->next!=NULL){
            iter=iter->next;
        }
        iter->next=(list *)malloc(sizeof(list));
        iter->next->x=a;
        iter->next->next=NULL;
    }
}

void delete(int a){
    if(root==NULL){
        printf("Listede silinecek obje yok.");
    }
    else{
        iter=root;
        if (root->x==a)
        {
            iter=root;
            root=root->next;
            free(iter);
        }
        else{
       
            iter=root;
            while (iter->next->x!=a)
            {
                iter=iter->next;
            }
            if (iter->x==a)
            {
                temp=iter;
                iter=iter->next;
                free(temp);
            }
     }
        
    }
}

void print(){
    if(root==NULL){
        printf("Liste Bos...\n");
    }
    iter=root;
    printf("%d ",iter->x);
    while (iter->next!=NULL)
    {
        iter=iter->next;
        printf("%d ",iter->x);
    }
    
}


int main(){
    push(1);
    push(2);
    delete(2);
    print();
    push(3);
    delete(3);
    print();

}

