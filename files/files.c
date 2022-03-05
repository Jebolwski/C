#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){

    FILE *filewrite,*fileread,*fw;
    char mrt[4]="mert";
    char mlh[5]="melih";
    int a = 100;
    int b = 200;
    int c = 300;
    filewrite = fopen("files.txt","w");
    fprintf(filewrite,"%s %d %d",mlh,a,b);
    fclose(filewrite);
    fileread = fopen("files","r");
    fscanf(fileread,"%s %d %d",mlh,a,b);
    printf("%s %d %d",mlh,a,b);
    fclose(fileread);
    fw=fopen("files.txt","w");
    fwrite(mlh,1,4,fw);
    fclose(fw);

    getch();

}