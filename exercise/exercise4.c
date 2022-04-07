#include <stdio.h>
#include <conio.h>

int musteri(int num){

    switch (num)
    {
    case 1:
        printf("Musteri hizmetleri!");
        break;
    case 2:
        printf("Oneri ve Sikayet!");
        break;
    case 3:
        printf("Ozel!");
        break;
    default:
        printf("Yanlis girdi!");
        break;
    }

}


int main(){

    int num;
    printf("Turkcell hizmetleri (Siklar : 1, 2, 3) : ");
    scanf("%d",&num);
    musteri(num);
    getch();
}