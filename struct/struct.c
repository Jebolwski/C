#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


typedef enum{
    bay,
    bayan
}gender;

typedef struct{
    int age;
    int fight_iq;
    int power;
    int mindset;
    int footwork;
    char *name;
    gender g;
}fighter;

int training(fighter *fighter){
    if(fighter->age < 40){
        return 1;
    }
    else{
        return 0;
    }

}



int main(void){
    fighter ciryl_gane;
    ciryl_gane.age=31;
    ciryl_gane.fight_iq=95;
    ciryl_gane.power=85;
    ciryl_gane.footwork=95;
    ciryl_gane.name="Ciryl Gane";
    printf("%u | %u ",*ciryl_gane.name,ciryl_gane.g);

    printf("\n***********\n");

    fighter *moreno;
    moreno = (fighter*)malloc(sizeof(fighter));
    moreno ->age=28;
    printf("%d",moreno->age);
    printf("\nImproving ? %d",training(moreno));



    getch();
}