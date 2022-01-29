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
    getch();
}