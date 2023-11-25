#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int dizi[10],enbuyuk,enbuyukiki,i;
	for(i=0;i<10;i++)
	{
	    printf("Lutfen %d.sayiyi giriniz : ",i+1);
	    scanf("%d",&dizi[i]);
    }
	enbuyuk=dizi[0];
	for(i=0;i<10;i++)
	{
		if(dizi[i]>enbuyuk)
		{
			enbuyuk=dizi[i];
		}
	}
    enbuyukiki=-INFINITY;
	for(i=0;i<10;i++)
	{
		if (dizi[i]>enbuyukiki && dizi[i]<enbuyuk)
        {
            enbuyukiki=dizi[i];
        }
    }
    printf("En buyuk sayi : %d\n",enbuyuk);
    printf("En buyuk ikinci sayi : %d\n",enbuyukiki);
	return 0;
}