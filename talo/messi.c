#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
    char string1[30],string2[30],temp[30];
	int nwaka;
	printf("Kelimeyi girin : ");
    scanf("%s",temp);
	printf("kactan keselim abime : ");
	scanf("%d",&nwaka);
	for(int i=0;i<nwaka;i++){
		string1[i]=temp[i];
	}
	for(int i=nwaka;i<strlen(temp);i++){
		string2[i-nwaka]=temp[i];
	}
	printf("%s\n",string1);
	printf("%s",string2);
    return 0;
}