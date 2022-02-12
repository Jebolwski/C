#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

typedef struct n n;

struct n{
    int x;
    n *next;
};

typedef n node;

int ekleme(int x);
node *silme(int num);
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
    printf("hi\n");
    getch();
    ekleme(50);
    getch();
    ekleme(20);
    getch();
    printf("hello\n");
    ekleme(70);
    bastir(root);
    getch();
}



int ekleme(int x){
  iter=root;
  printf("Buraya Geldi!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
 while( iter -> next != root){
  printf("Buraya Gelmedi\n!");
  iter = iter -> next;
 }
 iter -> next = (node *)malloc(sizeof(node ));
 iter -> next -> x = x;
 iter -> next -> next = root;
}



node *silme(int num){
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