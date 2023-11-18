#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int number;
    printf("Bir numara girin : ");
	scanf("%d",&number);
	if (number/1000>9){
		printf("4 haneli numara girin.\n");
		main();
	}
	if (number/1000==0){
		printf("4 haneli numara giriniz.\n");
		main();
	}

}







