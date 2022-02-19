#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>


int array[10];

int push(int data){
    if(array[0]==0){
        array[0]=data;
        printf("Dizi : %d \n",data);
        return data;
    }
    else{
        int j=0;
        while(array[j]!=0){
            j=j+1;
        }
        array[j]=data;
        int i=0;
        printf("Dizi : ");
        while(array[i]!=0){
            printf("%d ",array[i]);
            i=i+1;
        }
        printf("\n");
        return data;
    }
}

int pop(){
    if(array[0]==0){
        printf("Dizi boş...\n");
    }
    else{
        int i=0;
        while(array[i]!=0){
            i=i+1;
        }
        printf("Üstten çıkarılan : %d\n",array[i-1]);
        array[i-1]=0;
        return array[i];
    }
}






int main(void){
    push(1);
    push(2);
    push(3);
    pop();
    push(4);
    push(5);
    push(6);
    pop();
    pop();
    push(7);
    int i=0;


}