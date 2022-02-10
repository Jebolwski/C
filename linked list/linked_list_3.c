#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

typedef struct n n;

struct n{
    int x;
    n *next;
};

typedef n node;

void ekleme(node * r, int x);
node *silme(node *r,int num);
void bastir( node * r);
node *iter;
node *root;

int main(){
    node *root;
    node *iter;
    root=(node *)malloc(sizeof(node));
    root->x=20;
    root->next=NULL;
    iter=root;
    bastir(root);
    ekleme(root,50);
    ekleme(root,20);
    ekleme(root,70);
    bastir(root);
    silme(root,20);
    bastir(root);
}



void ekleme( node * r, int x){
 while( r -> next != NULL){
  r =r -> next;
 }
 r -> next = ( node *) malloc (sizeof (node ) );
 r -> next -> x = x;
 r -> next -> next = NULL;
 
}



node *silme(node *root,int num){
    node *temp;
    temp=iter->next;
    if( root->x == num){
    iter = root;
    root=root->next;
    free (iter);
    return 0;
    }
    iter=root;
    while ( iter->next != NULL && iter->next->x != num){
        iter = iter->next;
    }
    if(iter->next==NULL){
        printf("Bulunamadı\n");
        return 0;
    }
    temp = iter->next;
    iter->next = iter->next->next;
    free (temp);
    return 0;
}



void bastir( node * r){
 while (r != NULL){
  printf("%d ", r->x);
  r = r -> next;
 }
 printf("\n");
}