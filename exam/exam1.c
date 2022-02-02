#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char name[20];
    int age;
    int math_note;
}Person;




int main(){
    for(int i=0;i<5;i++){
        for(int j=5;j>i;j--){
            printf(" ");
        }
        for(int k=0;k<i+1;k++){
            printf("*");
        }
        for(int k=0;k<i;k++){
            printf("*");
        }
        printf("\n");
    }

    int b=1967;
    int *p;
    p=&b;
    char greeting[] = "Hello";
    printf("address:%d \nstring: %s\n",p,greeting);

    int *name;
    name = (char*)malloc(sizeof(char)*20);
    Person Messi;
    Person *Messiptr;
    Messiptr = &Messi;
    *Messiptr->name="leo messi";
    Messiptr->age=34;
    Messiptr->math_note=56;
    printf("%d",*Messiptr->name);
    
}