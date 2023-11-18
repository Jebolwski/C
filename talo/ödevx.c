#include<stdio.h>
#include<math.h>
int main () {
int a,b,c,d,sayi;
int sonuc1 ;
printf("4 basamakli pozitif bir tam sayi giriniz: ");

scanf("%d",&sayi);

a=sayi%10 ;
b=(sayi/10)%10 ;
c=(sayi/100)%10 ;
d=(sayi/1000)%10 ;


if (a==b||a==c||a==d||b==c||b==d||c==d)	{

	printf("Tum basamak degerleri birbirinden farkli sayi giriniz\n");
	}

	
	
	
	
	
	
	
	
	return 0;
}
