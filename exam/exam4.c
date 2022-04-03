#include <stdio.h>
#include <math.h>
main(){

    int a=2, b=8, c, d;
     c = sqrt(a*b);
     d = pow(a,c);
    while(d>10) {
        d -= 2;
        c ++;
    }
    printf("%d", c*d);

}
// c=4, d=16
//çıktı = 64


#include <stdio.h>
main(){
    int a=4, b=6, c, d;
    if(b>a && b%a == 0)
        c = a+b;
        else {
        if(a >b || a != 0) c = a*b;
        else c = a-b;
    }
    printf("%d",c);
}

// çıktı = -2


#include <stdio.h>
main(){
    int i, j, a=5, b=8;
    for(i=4;i<10;i+=2) {
        for(j=6;j>=3;j--) {
            if(i>j) a++;
            else b--;
        }
    }
    printf("%d",a*b);
}
// i j
// 4 6 b=7
// 4 5 b=6
// 4 4 b=5
// 4 3 a=6

// 6 6 b=4
// 6 5 a=7
// 6 4 a=8
// 6 3 a=9

// 8 6 a=10
// 8 5 a=11
// 8 4 a=12
// 8 3 a=13

// a=13 b=4

// çıktı = 42

#include <stdio.h>
#include <conio.h>

// girilen sayıdan sonraki 5 asal sayıyı gösterme
int main(){
    int num;
    int count=0;
    printf("Bir numara giriniz : ");
    scanf("%d",&num);
    int total=num;

    while(1){

        total=total+1;
        if(total%2!=0 && total%3!=0 && total%5!=0 && total%7!=0){
            count=count+1;
            printf("%d ",total);
        }
        
        if (count==5)
        {
            break;
        }

    }
    getch();
}


#include <stdio.h>
#include <conio.h>
// mükemmel sayı bulucu
int main(){
    int num;
    int total=0;
    printf("Bir numara giriniz : ");
    scanf("%d",&num);
    for(int i=1;i<num;i++){
        if(num%i==0){
            total=total+i;
        }
    }
    if (total==num){
        printf("Bu sayi mukemmel!");
    }
    else{
        printf("Bu sayi mukemmel degil!");

    }
    getch();
}


#include <stdio.h>
#include <math.h>
int main(){
    int a=4, b=6; double c;
    b += a; 
    a *= b;
    c = sqrt(a*b);
    printf("%lf", c);
}
// b=10
// a=40
// c=20
// çıktı = 20.00 


#include <stdio.h>
int main() {
    int a=7, b=4, c=1;
     while(a>b) {
     c *= b;
     b++;
     }
    printf("%d", c);
}
// a b
// 7 4 c=4*1
// 7 5 c=4*5
// 7 6 c=20*6
// çıktı=120


#include <stdio.h>
int main() {
    int i, j, x=5, y=8;
    for(i=3;i<9;i+=2) {
        for(j=20;j>0;j-=5) {
            if((i*j)%10==0) continue;
            else if(i>j) x *= 2;
            else if(j>i) y += 2;
            else y += x;
        }
    }
    printf("%d",x*y);
}
// i j   i*j  x  y
// 3 20  60   5  10  
// 3 15  45   5  12
// 3 10  30   5  12
// 3 5   15   5  14


// 5 20  100  5  14  
// 5 15  75   5  16
// 5 10  50   5  16
// 5 5   25   5  18


// 7 20  140  5  18
// 7 15  105  5  20  
// 7 10  70   5  20
// 7 5   25   10 20
// çıktı = 200

