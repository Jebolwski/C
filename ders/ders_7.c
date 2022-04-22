#include <stdio.h>
#include <conio.h>
#define PI 3.14


float hacim(int yaricap,int yuksekik){
    float hacim = PI*yaricap*yaricap*yuksekik;
    printf("Hacimi : %f\n",hacim);
}

float yuzey_alani(int yaricap,int yukseklik){
    float yuzey_alani = 2*2*PI*yaricap + 2*PI*yaricap*yukseklik;
    printf("Yuzey alani : %f\n",yuzey_alani); 
}

float cevre(int yaricap,int yukseklik){
    float cevre = yaricap*4+yukseklik*2;
    printf("Cevre : %f\n",cevre);
}

float cevre(int yaricap,int yukseklik){
    float cevre = yaricap*4+yukseklik*2;
    printf("Cevre : %f\n",cevre);
}


int main(){ 

    int yukseklik;
    int yaricap;
    printf("Silindirin yaricapi : ");
    scanf("%d",&yaricap);
    printf("Silindirin yuksekligi : ");
    scanf("%d",&yukseklik);
    cevre(yaricap,yukseklik);
    yuzey_alani(yaricap,yukseklik);
    hacim(yaricap,yukseklik);
    getch();

}