#include<stdio.h>
#include <math.h>

int main (){

   double sayi;
    
  	printf("bir sayi giriniz : ");
	scanf("%lf",&sayi);
	
	float ondaliklikisim;
	int tamkisim;
	ondaliklikisim=sayi-(int)sayi;
    tamkisim =(int)(sayi);


   
   int hane=0;
   while(1){
        ondaliklikisim*=10;
        if (((int)ondaliklikisim)%10==0){
            break;
        }
        hane++;
    }

    printf("hane :  %d\n",hane);
    int ondaliklikisim1;
    
  
    printf("tamkisim : %d\n",tamkisim);
    
    printf("ondaliklikisim : %d\n",(int)ondaliklikisim/10);

    int taban;
	printf("taban giriniz 2 : (2 tabani) 8 : (8 tabani) 16: (16 tabani) : ");
	scanf("%d",&taban);
	
	
	return 0;
}