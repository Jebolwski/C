#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
typedef struct n n;

struct n{
    int x;
    n *next;
};
typedef n node;

int push(int a);

int print();

node *iter;
node *start;
node *end;



int main(void){
    
    end = (node*)malloc(sizeof(node*));
    end->x=1;
    end->next=NULL;
    
    iter=end;
    while(iter->next!=NULL){
        iter=iter->next;
    }
    start=iter;
    start->next=NULL;
    iter=end;

    for(int i=2;i<11;i++){
        push(i);
    }

    print();
    
}

int push(int a){
    start->next = (node*)malloc(sizeof(node*));
    start->next->x=a;
    start->next->next = NULL;
    start=start->next;
}

int print(){
    printf("Sıra : | %d |",iter->x);
    while(iter->next!=NULL){
        iter=iter->next;
        start=iter;
        printf(" %d |",iter->x);
    }
}
