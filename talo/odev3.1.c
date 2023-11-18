#include<stdio.h>
#include<math.h>
#include <stdlib.h>

int main () {
    int a,b,c,d,sayi;
    int sonuc1;

    printf("4 basamakli pozitif bir tam sayi giriniz : ");
    scanf("%d",&sayi);

    //sayinin 4 basamakli olup olmadigi kontrol ediliyor
    if (sayi < 1000 || sayi > 9999) {
        printf("Gecersiz sayi girildi. Lutfen 4 basamakli bir sayi girin.\n");
         return 0;  // Hata koduyla programdan cik
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
    
    //en buyugu bulma
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
    
	//en kucuk bulma
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

    int dizi[4];
    dizi[0]=a;
    dizi[1]=b;
    dizi[2]=c;
    dizi[3]=d;
    int max_a;
    int max_b;
    int max_c;
    int max_d;
    float max=-100;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                for (int a = 0; a < 4; a++)
                {
                    if (i!=j && j!=k && k!=a && i!=k && i!=a && j!=a){
                        float sonuc = ((dizi[i]*dizi[i]) - (dizi[j]*dizi[j]))/((pow(dizi[k],3)-pow(dizi[a],3)));
                        if (sonuc<0){
                            sonuc = sonuc*-1;
                        }
                        if (sonuc>max){
                            max=sonuc;
                            max_a=dizi[i];
                            max_b=dizi[j];
                            max_c=dizi[k];
                            max_d=dizi[a];
                        }
                        
                        printf("a : %d, b : %d, c : %d, d : %d oldugunda sonuc : %f\n", dizi[i], dizi[j], dizi[k], dizi[a],sonuc);
                    }
                }
            }
        }
    }
    
    int ikinci_buyuk, ucuncu_buyuk;

    if (en_b == a && en_k == b){
        //pay
        if (c>d){
            ikinci_buyuk=c;
            ucuncu_buyuk=d;
        }else{
            ikinci_buyuk=d;
            ucuncu_buyuk=c;
        }
    }
    if (en_b == a && en_k == c){
        //pay
        if (b>d){
            ikinci_buyuk=b;
            ucuncu_buyuk=d;
        }else{
            ikinci_buyuk=d;
            ucuncu_buyuk=b;
        }
    }
    if (en_b == a && en_k == d){
        //pay
        if (c>b){
            ikinci_buyuk=c;
            ucuncu_buyuk=b;
        }else{
            ikinci_buyuk=b;
            ucuncu_buyuk=c;
        }
    }
    if (en_b == b && en_k == c){
        //pay
        if (a>d){
            ikinci_buyuk=a;
            ucuncu_buyuk=d;
        }else{
            ikinci_buyuk=d;
            ucuncu_buyuk=a;
        }
    }
    if (en_b == b && en_k == d){
        //pay
        if (c>a){
            ikinci_buyuk=c;
            ucuncu_buyuk=a;
        }else{
            ikinci_buyuk=a;
            ucuncu_buyuk=c;
        }
    }
    if (en_b == c && en_k == d){
        //pay
        if (a>b){
            ikinci_buyuk=a;
            ucuncu_buyuk=b;
        }else{
            ikinci_buyuk=b;
            ucuncu_buyuk=a;
        }
    }
    if (en_b == b && en_k == a){
        //pay
        if (c>d){
            ikinci_buyuk=c;
            ucuncu_buyuk=d;
        }else{
            ikinci_buyuk=d;
            ucuncu_buyuk=c;
        }
    }
    if (en_b == c && en_k == a){
        //pay
        if (b>d){
            ikinci_buyuk=b;
            ucuncu_buyuk=d;
        }else{
            ikinci_buyuk=d;
            ucuncu_buyuk=b;
        }
    }
    if (en_b == d && en_k == a){
        //pay
        if (c>b){
            ikinci_buyuk=c;
            ucuncu_buyuk=b;
        }else{
            ikinci_buyuk=b;
            ucuncu_buyuk=c;
        }
    }
    if (en_b == c && en_k == b){
        //pay
        if (a>d){
            ikinci_buyuk=a;
            ucuncu_buyuk=d;
        }else{
            ikinci_buyuk=d;
            ucuncu_buyuk=a;
        }
    }
    if (en_b == d && en_k == b){
        //pay
        if (c>a){
            ikinci_buyuk=c;
            ucuncu_buyuk=a;
        }else{
            ikinci_buyuk=a;
            ucuncu_buyuk=c;
        }
    }
    if (en_b == d && en_k == c){
        //pay
        if (a>b){
            ikinci_buyuk=a;
            ucuncu_buyuk=b;
        }else{
            ikinci_buyuk=b;
            ucuncu_buyuk=a;
        }
    }
    
    
    printf("En buyuk : %d\nEn kucuk : %d\n2. buyuk : %d\n3. buyuk : %d\n",en_b,en_k,ikinci_buyuk,ucuncu_buyuk);
    printf("===================\n");
    printf("Max sonuc : %.4f, A: %d, B: %d, C: %d, D: %d\n",max,max_a,max_b,max_c,max_d);
    printf("===================\n");
	
    
    float min=10000;
    int min_a;
    int min_b;
    int min_c;
    int min_d;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                for (int a = 0; a < 4; a++)
                {
                    if (i!=j && j!=k && k!=a && i!=k && i!=a && j!=a){
                        float sonuc = ((dizi[i]*dizi[i])-(dizi[j]*dizi[j]))*((dizi[k]*dizi[k]*dizi[k])-(dizi[a]*dizi[a]*dizi[a]));
                        if (sonuc<0){
                            sonuc = sonuc*-1;
                        }
                        if (sonuc<min){
                            min=sonuc;
                            min_a=dizi[i];
                            min_b=dizi[j];
                            min_c=dizi[k];
                            min_d=dizi[a];
                        }
                        printf("a : %d, b : %d, c : %d, d : %d oldugunda sonuc : %f\n", dizi[i], dizi[j], dizi[k], dizi[a],sonuc);
                    }
                }
            }
        }
    }
    printf("Min sonuc : %.4f, A: %d, B: %d, C: %d, D: %d\n",min,min_a,min_b,min_c,min_d);
    return 0;
} 
