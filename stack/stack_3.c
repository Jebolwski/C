#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

typedef struct n n;

struct n{
    int x;
    n *next;
};


typedef n node;

node *root;
node *iter;
node *temp;


int push(int a){
    if (root==NULL) {
        root=(node*)malloc(sizeof(node));
        root->x=a;
        root->next=NULL;
        printf("%d\n",a);
    }
    
    else{
        iter=root;
        while(iter->next!=NULL){
            iter=iter->next;
        }
        iter->next=(node*)malloc(sizeof(node));
        iter->next->x=a;
        iter->next->next=NULL;
        temp=root;
        printf("%d ",temp->x);
        while(temp->next!=NULL){
            temp=temp->next;
            printf("%d ",temp->x);
        }
        printf("\n");
    }
}

int pop(){
    if (root==NULL){
        printf("Kuyruk Boş...\n");
    }
    else{
        iter=root;
        while(iter->next->next!=NULL){
            iter=iter->next;
        }
        printf("Çıkarılan : %d\n",iter->next->x);
        temp=iter->next;
        iter->next=NULL;
        free(temp);
    }
}




int main(void){
    pop();
    push(10);
    push(20);
    push(30);
    pop();
    push(40);
    pop();
    push(50);
    pop();
    push(60);
    pop();
    push(40);


}