#include <stdio.h>
#include <conio.h>



int main(){

    int not;

    printf("Notunuzu giriniz : ");
    scanf("%d",&not);
    printf("\n");
    if(100>=not>=0){
        if(not>=50){
            printf("Geçtiniz, ");
            if(100>=not>=90){
                printf("Notunuz AA");
            }
            else if(89>=not>=80){
                printf("Notunuz AB");
            }
            else if(79>=not>=70){
                printf("Notunuz BB");
            }
            else if(69>=not>=60){
                printf("Notunuz BC");
            }
            else if(59>=not>=50){
                printf("Notunuz CC");
            }
        }
        else{
            printf("Kaldınız, ");
            if(50>=not>=25){
                printf("Notunuz DD");
            }
            else{
                printf("Notunuz FF");
            }
        }
    }
    else{
        printf("Yanlis Girdi...");
    }
    getch();
}