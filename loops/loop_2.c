#include <stdio.h>
#include <time.h>
#include <conio.h>



int main(){
    int yil,ay,gun;
    printf("Dogum tarihinizin gununu rakam olarak giriniz : ");
    scanf("%d",&gun);
    while(1){
        
        if(1<=gun && gun<=31){
            break;
        }
        else{
            printf("Dogum tarihinizin gununu tekrar giriniz : ");
            scanf("%d",&gun);
        }
    }
    printf("Dogum tarihinizin ayini rakam olarak giriniz : ");
    scanf("%d",&ay);
    while(1){
        
        if(1<=ay && ay<=12){
            break;
        }
        else{
            printf("Dogum tarihinizin ayini tekrar giriniz : ");
            scanf("%d",&ay);
        }
    }
    printf("Dogum tarihinizin yilini rakam olarak giriniz : ");
    scanf("%d",&yil);
    while(1){
        
        if(1920<=yil && yil<=7000){
            break;
        }
        else{
            printf("Dogum tarihinizin yilini tekrar giriniz : ");
            scanf("%d",&yil);
        }
    }
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);


    int ay1=tm.tm_mon-ay;
    int gun1=tm.tm_mday-gun;
    int yil1=tm.tm_year-yil+1900;
    if(tm.tm_mon>ay){
    }
    else{
        yil1=yil1-1;
        ay1=12-ay;
    }

    if(tm.tm_mday>gun){
        gun1=tm.tm_mday-gun;
    }
    else{
        gun1=31-gun;
        ay1=ay1-1;
    }


    

    
    printf("Yasiniz : %d yil, %d ay, %d gun",yil1,ay1,gun1);

    
    getch();

}