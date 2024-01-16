#include <stdio.h>
#include <string.h>
#include <math.h>


int sonuc(int parametre,int dizi[],int size){
	int n=size;
	float toplam=0.0,varyans=0.0,ss=0.0;
	float ortalama=0.0;
	
	
	for (int i = 0; i < n; i++) {
        toplam += dizi[i];
    }
    ortalama = toplam / n;
    
	for (int i = 0; i < n; i++) {
		varyans += pow(dizi[i] - ortalama, 2);
    }
    varyans /= n;
    
	if(parametre==1){//ss
	return varyans;
	
	}
	if(parametre==0){//varyans
	ss=pow(varyans,0.5);
	return ss;	
	}
	
}

int main(){
	int istek;
	int dizii[5]={1,2,3,4,5};
	printf("ne istiyorsun 1=varyans 0=ss : ");
	scanf("%d",&istek);
	printf("%d",sonuc(istek,dizii,5));
}