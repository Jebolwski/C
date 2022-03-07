#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


int main(){

    long a = 1321;
    int *c;
    c=&a;
    printf("a adres : %i\na deger : %i\nc adres : %i\n",c,*c,&c);
    char S1[30]="I love playing soccer.";
    char S2[20]="We are";
    printf( "%d\n", strlen( S1 ) );
    printf( "%d\n", sizeof( S1 ) );
    strcpy( S1+15, "basketballa." );
    printf( "%s\n", S1 );
    int x=17;
    int y=24;
    int p=(x & y);
    int r=(x | y);
    int s=(x ^ y);
    int t=(y >> 2);
    int v=(x << 3);
    printf( "%d\n", p );
    printf( "%d\n", r );
    printf( "%d\n", s );
    printf( "%d\n", t );
    printf( "%d\n", v );
}