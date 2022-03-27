#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



typedef struct 
{
    int duration;
    char *name;
    char *artist;
    char *link;
    char *album;
}song;

struct student{
    char name[50];
    int obp;
    int roll;
}s;


int main(){
    printf("Enter your students name : ");
    fgets(s.name,50,stdin);
    printf("Enter her/his mark : ");
    scanf("%d",&s.obp);

    printf("Name : %s\nOBP : %d",s.name,s.obp);

    getch();




    int *name;
    name=(char *)malloc(sizeof(char)*50);
    int *artist;
    artist=(char *)malloc(sizeof(char)*50);
    int *link;
    link=(char *)malloc(sizeof(char)*50);
    int *album;
    album=(char *)malloc(sizeof(char)*50);
    song seven_nation;
    seven_nation.duration = 238;
    seven_nation.name="Seven Nation Army";
    printf("Name : %s Duration : %d",seven_nation.name,seven_nation.duration);
    


}