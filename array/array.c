#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct
{
    char *name;
    char *surname;
    int age;
    int fiq;
    int power;
    int wrestling;
}mmartist;


int main(void){
    int *array=(int *)malloc(sizeof(int)*10);
    for (int i =0;i<9;i++){
        array[i]=(i+1)*28;

    }
    for(int j=0;j<9;j++){
        printf(" %d ",array[j]);
    }
    mmartist khabib;
    char *name;
    name=(char*)malloc(sizeof(char));
    char *surname;
    surname=(char*)malloc(sizeof(char));
    khabib.name="\nKhabib";
    khabib.surname="Nurmagomedov";
    khabib.age=33;
    khabib.fiq=92;
    khabib.power=82;
    khabib.wrestling=98;
    printf("%s %s\n",khabib.name,khabib.surname);
    printf("Age:%i Fight IQ: %i\n",khabib.age,khabib.fiq);
    printf("Wrestling: %i\n",khabib.wrestling);
    int arr[] = {1,2,3};
    printf("%d,%d,%d\n",arr,&arr[1],&arr[2]);
    for(int i = 1;i<10;i++){
        printf("%d-",i);
        for(int j=10;j>i;j--){
            printf("|");
        }
        printf("\n");
    }
    for(int i = 1;i<10;i++){
        printf("%d-",i);
        for(int j=0;j<i;j++
        ){
            printf("|");
        }
        printf("\n");
    }
}