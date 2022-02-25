#include <stdio.h>
#include <stdlib.h>


int uzunluk(char *p){
    int uzunluk=0;
    int i=0;
    for(;p[i]!='\0';i++){
        uzunluk++;
    } 
    return uzunluk;
}

char *tersecevir(char *p){
    char *new_p;
    for(int i=0;i<uzunluk(p);i++){
        new_p[i]=p[uzunluk(p)-i-1];
    }
    printf("%s",new_p);
    return new_p;

}

int main(){
    char text[]="Ali";
    char *p;
    p=&text;
    printf("%s\n",p);
    printf("%i\n",uzunluk(p));
    tersecevir(p);
    
}