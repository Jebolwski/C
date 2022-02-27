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

char *bastir(char *p){
    printf("%s\n",p);
}

char *tersecevir(char *p){
    char temp[uzunluk(p)];

    for(int i=0;i<uzunluk(p)-1;i++){
        temp[i]=p[uzunluk(p)-i];
    }

    char *temp_p;
    temp_p=&temp;
    
    return temp_p;
}

char *kopyalama(char *p,char *p1){
    int i=0;
    p=p1;
}

char *esitmi(char *p,char *p1){
    int i=0;
    int count=0;
    if(p==p1){
        return "Eşit";
    }
    else{
        return "Eşit Değil";
    }
}

char *sonelemansilme(char *p){
    int soneleman = uzunluk(p)-1;
    char temp=p;
    p[soneleman] = NULL; 
    return "Önceki Hali :",temp,"Sonraki Hali :",p;  
}

int main(){
    char text[]="Ali";
    char text1[]="Aliasdad";
    char *p;
    p=&text;
    char *p1;
    p1=&text1;
    // bastir(p);
    // printf("Uzunluk : %i\n",uzunluk(p));
    // printf("Girdiler %s\n",esitmi(p1,p));
    // kopyalama(p,p1);
    printf("%s\n",tersecevir(p1));
}