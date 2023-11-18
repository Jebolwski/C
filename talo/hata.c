#include<stdio.h>
#include<math.h>
int main ()   {
	//ondalikli sayi olusturma
    double numara = 231229013;
    printf("Ondalikli numara : %f\n",numara/1000000);

    //ondalikli kismi tam sayiya cevirme
    double num = numara/1000000;
    int tam_sayi_kismi = (int)numara/1000000;
    numara = numara - tam_sayi_kismi*1000000;

    //cevrilmis sayilarin rakamlarini toplama
    int toplam=0;
    int numara_int = (int)numara;
    int a;
    while(numara_int>0)    
    {    
        a=numara_int%10;    
        toplam=toplam+a;    
        numara_int=numara_int/10;    
    }    
    printf("'%i' sayisindaki rakamlarin toplami : %i\n",(int) numara,(int)toplam);
   	int z,x,y;
   	float sonuc,ogrencino;
   	x=1;
   	y=0;
   	ogrencino=231.229013 ;
   	
	z=17;

	x=x+1;
	sonuc=(pow(x,3)+-0.1*pow(y,2)-z)/5;
	printf("x=2 icin  sonuc %.2f\n",sonuc);
	
	x=x+1;
	sonuc=(pow(x,3)+-0.1*pow(y,2)-z)/5;
	printf("x=3 icin  sonuc %.2f\n",sonuc);
	x=x+1;
	sonuc=(pow(x,3)+-0.1*pow(y,2)-z)/5;
	printf("x=4 icin  sonuc %.2f\n",sonuc);
	
	printf("x=4 oldugunda elde edilen sonuc araligindan cok uzaklasildigindan x=3 olarak alinacaktir\n\n");
	x=3;
	y=y+1;;
	sonuc=(pow(x,3)-0.1*pow(y,2)-z)/5;
	printf("y=1 icin  sonuc %.2f\n",sonuc);
	y=y+1;
	sonuc=(pow(x,3)-0.1*pow(y,2)-z)/5;
	printf("y=2 icin  sonuc %.2f\n",sonuc);
	y=y+1;
	sonuc=(pow(x,3)-0.1*pow(y,2)-z)/5;
	printf("y=3 icin  sonuc %.2f\n",sonuc);
	y=y+1;
	sonuc=(pow(x,3)-0.1*pow(y,2)-z)/5;
	printf("y=4 icin  sonuc %.2f\n",sonuc);
	
	y=y+1;;
	sonuc=(pow(x,3)-0.1*pow(y,2)-z)/5;
	printf("y=5 icin  sonuc %.2f\n",sonuc);
	y=y+1;
	sonuc=(pow(x,3)-0.1*pow(y,2)-z)/5;
	printf("y=6 icin  sonuc %.2f\n",sonuc);
	y=y+1;
	sonuc=(pow(x,3)-0.1*pow(y,2)-z)/5;
	printf("y=7 icin  sonuc %.2f\n",sonuc);
	y=y+1;
	sonuc=(pow(x,3)-0.1*pow(y,2)-z)/5;
	printf("y=8 icin  sonuc %.2f\n",sonuc);
	
	y=y+1;;
	sonuc=(pow(x,3)-0.1*pow(y,2)-z)/5;
	printf("y=9 icin  sonuc %.2f\n",sonuc);
	y=y+1;
	sonuc=(pow(x,3)-0.1*pow(y,2)-z)/5;
	printf("y=10 icin  sonuc %.2f\n",sonuc);
	y=y+1;
	sonuc=(pow(x,3)-0.1*pow(y,2)-z)/5;
	printf("y=11 icin  sonuc %.2f\n",sonuc);
	y=y+1;
	sonuc=(pow(x,3)-0.1*pow(y,2)-z)/5;
	printf("y=12 icin  sonuc= %.2f\n\n",sonuc);
	
	printf("x=3 y=10 Toplam=17 oldugunda denklem verilen araliga en yakin degeri saglamaktadir");
	
    return 0;  

}

