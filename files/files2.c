#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
    char data[10]="merb";
    FILE *file;
    file = fopen("files2.txt","w");
    fprintf(file,"Yazıldı mı?\n");
    fprintf(file,"Evet Yazılmış.\n");
    fwrite(data,1,4,file);
    fclose(file);


}
