#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void zar(){
    int one=0,two=0,three=0,four=0,five=0,six=0;
    for (int i = 0; i < 10000; i++)
    {
        float num = (rand()%6+1);
        if(num==1.0){
            one++;
        }
        else if (num==2.0)
        {
            two++;
        }
        else if (num==3.0)
        {
            three++;
        }
        else if (num==4.0)
        {
            four++;
        }
        else if (num==5.0)
        {
            five++;
        }
        else if (num==6.0)
        {
            six++;
        }
    }
    printf("bir orani : %.2f %%\n",one/100.0);
    printf("iki orani : %.2f %%\n",two/100.0);
    printf("uc orani : %.2f %%\n",three/100.0);
    printf("dort orani : %.2f %%\n",four/100.0);
    printf("bes orani : %.2f %%\n",five/100.0);
    printf("alti orani : %.2f %%\n",six/100.0);

}

void hileli_para(){
    int yazi=0;
    int tura=0;
    
    for (int i = 0; i < 10000; i++)
    {   
        float num = rand()/(float) RAND_MAX;
        if(num>0.40){
            yazi++;
        }
        else if (num<=0.40)
        {
            tura++;
        }
    }
    printf("yazi orani : %.2f %%\n",yazi/100.0);
    printf("tura orani : %.2f %%\n",tura/100.0);
}


int main(){


    zar();
    hileli_para();

}