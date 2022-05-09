#include <stdio.h>
#include <stdlib.h>

int main()
{
    char data[10] = "merbaba";
    FILE *file;
    file = fopen("files3.txt", "w");
    fprintf(file, "Merhaba");
    fclose(file);
    file = fopen("files3.txt", "a");
    fprintf(file, "Ekleme");
    fclose(file);
    file = fopen("files3.txt", "a");
    fprintf(file, data);
    fclose(file);
    file = fopen("files3.txt", "r");
    fread(data, 1, 5, file);
    fclose(file);
}