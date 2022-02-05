#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

    char str[30]="merhabaaaaa chronic snoop.dogg";

    FILE *fileptr;

    fileptr = fopen("files1.txt","w");
    fprintf(fileptr,"hello my name is DMX");
    fclose(fileptr);

    fileptr = fopen("files1.txt","w");
    fwrite(str,1,sizeof(str),fileptr);
    fclose(fileptr);

    fileptr = fopen("files1.txt","a");
    fputs("\nhello",fileptr);
    fclose(fileptr);
    
    fileptr = fopen("files1.txt","w+");
    fprintf(fileptr,"wat");
    fread(str,1,5,fileptr);
    fclose(fileptr);
    exit(1);
}
