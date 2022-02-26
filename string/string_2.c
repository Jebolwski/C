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
    printf("%s\n",new_p);
    return new_p;

}

int kopyalama(char *p,char *p1){
    int i=0;
    for(;p[i]!='\0';i++){
        p1[i]=p[i];
    }
    int j=uzunluk(p);
    for(;p1[j]!='\0';j++){
        p[j]=0;
    }
    return 0;
}


int esitmi(char *p,char *p1){
    int i=0;
    int count=0;
    for(;p[i]!='\0';i++){
        if(p[i]==p1[i] && uzunluk(p)==uzunluk(p1)){
            count++;
        }
        if(count==uzunluk(p) || count==uzunluk(p1)){
            return "Eşit";
        }
        return "Eşit Değil";
    }
}
int main(){
    char text[]="Ali";
    char text1[]="Ali";
    char *p;
    char *p1;
    p1=&text1;
    p=&text;
    printf("%s\n",p);
    printf("%i\n",uzunluk(p));
    printf("%s\n",esitmi(p1,p));
    kopyalama(p,p1);
    printf("%s\n",p1);
    tersecevir(p);

    
}