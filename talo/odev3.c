#include<stdio.h>
#include<math.h>
#include <stdlib.h>

int main () {
    int a,b,c,d,sayi;
    int sonuc1;

    printf("4 basamakli pozitif bir tam sayi giriniz: ");

    scanf("%d",&sayi);

    //sayinin 4 basamakli olup olmad��� kontrol ediliyor
    if (sayi < 1000 || sayi > 9999) {
        printf("Ge�ersiz giri�. L�tfen 4 basamakli bir sayi girin.\n");
        return 0; // Hata koduyla programdan ��k
    }


    //basamaklarinin farkli oldugu kontrol ediliyor
    d=sayi%10;
    c=(sayi/10)%10;
    b=(sayi/100)%10;
    a=(sayi/1000)%10;
    if (a==b || a==c || a==d || b==c || b==d || c==d){
	    printf("Tum basamak degerleri birbirinden farkli sayi giriniz\n");
        return 0;
	}
 

    //en b�y��� bulma
    int en_b = a;
    if (b > en_b) {
        en_b = b;
    }
    if (c > en_b) {
        en_b = c;
    }
    if (d > en_b) {
        en_b = d;
    }

    //en k�c�k bulma
    int en_k = a;
    if (b < en_k) {
        en_k = b;
    }
    if (c < en_k) {
        en_k = c;
    }
    if (d < en_k) {
        en_k = d;
    }

    float pay;
    float payda;
    float sonuc;

    if (en_b == a && en_k == b){
        //pay
        if (c>d){
            pay=(c*c)-(d*d);
        }else{
            pay=(d*d)-(c*c);
        }
    }
    if (en_b == a && en_k == c){
        //pay
        if (b>d){
            pay=(b*b)-(d*d);
        }else{
            pay=(d*d)-(b*b);
        }
    }
    if (en_b == a && en_k == d){
        //pay
        if (b>d){
            pay=(b*b)-(c*c);
        }else{
            pay=(c*c)-(b*b);
        }

        
    }
    if (en_b == b && en_k == c){
        //pay
        if (a>d){
            pay=(a*a)-(d*d);
        }else{
            pay=(d*d)-(a*a);
        }

        
    }
    if (en_b == b && en_k == d){
        //pay
        if (a>d){
            pay=(a*a)-(c*c);
        }else{
            pay=(c*c)-(a*a);
        }

        
    }
    if (en_b == c && en_k == d){
        //pay
        if (a>b){
            pay=(a*a)-(b*b);
        }else{
            pay=(b*b)-(a*a);
        }

        
    }
    if (en_b == b && en_k == a){
        //pay
        if (c>d){
            pay=(c*c)-(d*d);
        }else{
            pay=(d*d)-(c*c);
        }

        
    }
    if (en_b == c && en_k == a){
        //pay
        if (b>d){
            pay=(b*b)-(d*d);
        }else{
            pay=(d*d)-(b*b);
        }

        
    }
    if (en_b == d && en_k == a){
        //pay
        if (b>d){
            pay=(b*b)-(c*c);
        }else{
            pay=(c*c)-(b*b);
        }

        
    }
    if (en_b == c && en_k == b){
        //pay
        if (a>d){
            pay=(a*a)-(d*d);
        }else{
            pay=(d*d)-(a*a);
        }

    }
    if (en_b == d && en_k == b){
        //pay
        if (a>d){
            pay=(a*a)-(c*c);
        }else{
            pay=(c*c)-(a*a);
        }

    }
    if (en_b == d && en_k == c){
        //pay
        if (a>b){
            pay=(a*a)-(b*b);
        }else{
            pay=(b*b)-(a*a);
        }
        
    }
    
    payda = pow(en_b,3)-pow(en_k,3);
    sonuc = pay/payda;
    printf("En buyuk : %d, En kucuk : %d\n",en_b,en_k);
    printf("Min Sonuc : %.4f\n",sonuc);
    printf("Pay : %.3f, Payda : %.3f\n",pay,payda);


    float sonuc2;
    
	if (en_b == a && en_k == b){
        //1.carpan
        if (c>d){
            sonuc2=((c*c)-(d*d))*((a*a*a)-(b*b*b));
        }else{
            sonuc2=((d*d)-(c*c))*((a*a*a)-(b*b*b));
        }
    }
    if (en_b == a && en_k == c){
        //1.carpan
        if (b>d){
        sonuc2=((b*b)-(d*d))*((a*a*a)-(c*c*c)) ;   
        }else{
           sonuc2=((d*d)-(b*b))*((a*a*a)-(c*c*c)) ;
        }
    }
    if (en_b == a && en_k == d){
        //1.carpan
        if (b>c){
            sonuc2=((b*b)-(c*c))*((a*a*a)-(d*d*d));
        }else{
            sonuc2=((c*c)-(b*b))*((a*a*a)-(d*d*d));
        }

        
    }
    if (en_b == b && en_k == c){
        //1.carpan
        if (a>d){
            sonuc2=((a*a)-(d*d))*((b*b*b)-(c*c*c));
        }else{
            sonuc2=((d*d)-(a*a))*((b*b*b)-(c*c*c));
        }

        
    }
    if (en_b == b && en_k == d){
        //1.carpan
        if (a>c){
            sonuc2=((a*a)-(c*c))*((b*b*b)-(d*d*d));
        }else{
            sonuc2=((c*c)-(a*a))*((b*b*b)-(d*d*d));
        }

        
    }
    if (en_b == c && en_k == d){
        //1.carpan
        if (a>b){
            sonuc2=((a*a)-(b*b))*((c*c*c)-(d*d*d));
        }else{
            sonuc2=((b*b)-(a*a))*((c*c*c)-(d*d*d));
        }

        
    }
    if (en_b == b && en_k == a){
        //1.carpan
        if (c>d){
            sonuc2=((c*c)-(d*d))*((b*b*b)-(a*a*a));
        }else{
            sonuc2=((d*d)-(c*c))*((b*b*b)-(a*a*a));
        }

        
    }
    if (en_b == c && en_k == a){
        //1.carpan
        if (b>d){
            sonuc2=((b*b)-(d*d))*((c*c*c)-(a*a*a));
        }else{
            sonuc2=((d*d)-(b*b))*((c*c*c)-(a*a*a));
        }

        
    }
    if (en_b == d && en_k == a){
        //1.carpan
        if (b>c){
            sonuc2=((b*b)-(c*c))*((d*d*d)-(a*a*a));
        }else{
            sonuc2=((c*c)-(b*b))*((d*d*d)-(a*a*a));
        }

        
    }
    if (en_b == c && en_k == b){
        //1.carpan
        if (a>d){
            sonuc2=((a*a)-(d*d))*((c*c*c)-(b*b*b));
        }else{
            sonuc2=((d*d)-(a*a))*((c*c*c)-(b*b*b));
        }

    }
    if (en_b == d && en_k == b){
        //1.carpan
        if (a>c){
            sonuc2=((a*a)-(c*c))*((d*d*d)-(b*b*b));
        }else{
            sonuc2=((c*c)-(a*a))*((d*d*d)-(b*b*b));
        }

    }
    if (en_b == d && en_k == c){
        //1.carpan
        if (a>b){
            sonuc2=((a*a)-(b*b))*((d*d*d)-(c*c*c));
        }else{
            sonuc2=((b*b)-(a*a))*((d*d*d)-(c*c*c));
        }
        
    }

    printf("Maksimum Sonuc : %.3f\n",sonuc2);







	return 0;
} 
