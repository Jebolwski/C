#include<stdio.h>
int sifir=0,bir=0;
void binaryRepresentation(int n) {
    int binary[32]; 
    int i = 0;

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    while (i < 8) {
        binary[i] = 0;
        i++;
    }

    printf("ikili karsiligi: ");
    
	for (int j = 7; j >= 0; j--) {
         printf("%d",binary[j]);
        
		if(binary[j]==0){
        	
        	sifir++;
		}
		if(binary[j]==1){
        	
        	bir++;
        
   		}
}
    printf("\n %d tane sifir %d tane bir var",sifir,bir);
}

int main() {
    int num;

    printf("Lütfen bir pozitif sayı girin: ");
    scanf("%d", &num);

    binaryRepresentation(num);

    return 0;
}