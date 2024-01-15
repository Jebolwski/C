#include <stdio.h>
#include <string.h>


char* degis(char charDizi[],char degiscek,char yenisi){
    for (int i = 0; i < strlen(charDizi); i++)
    {
        if (charDizi[i] == degiscek){
            charDizi[i] = yenisi;
        }
    }

    return charDizi;
}



int main(){
    char string[50]="MERHABA";
    char neyi;
    printf("Neyi : ");
    scanf("%c",&neyi);
    char neyle;
    printf("Neyi : ");
    scanf("%c",&neyle);
    printf("Onceki hali : %s\n",string);
    printf("Son hali : %s",degis(string,'B','X'));
    
}