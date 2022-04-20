#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.14

double taban_alan(int yaricap){
    float b = PI*yaricap*yaricap;
    printf("Taban alani : %f\n",b);
    return b;
}

double yanal_alan(int yaricap,int a){
    float b = PI*a*yaricap;
    printf("Yanal alani : %f\n",b);
    return b;
}

double toplam_alan(int yaricap,int a){
    float yanal = yanal_alan(yaricap,a);
    float taban = taban_alan(yaricap);
    printf("Toplam alan : %f\n",yanal+taban);
}


double hacim(int yukseklik,int yaricap){
    printf("Hacim : %f",PI*yaricap*yaricap*yukseklik/3);
}

int main(){
    int yaricap;
    int yukseklik;
    printf("yaricap : ");
    scanf("%d",&yaricap);
    printf("yukseklik : ");
    scanf("%d",&yukseklik);
    int a = sqrt(yaricap*yaricap+yukseklik*yukseklik);

    toplam_alan(yaricap,a);
    hacim(yukseklik,yaricap);

    getch();

}