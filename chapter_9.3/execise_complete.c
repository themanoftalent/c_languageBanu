#include <stdio.h>
#include <stdlib.h>


double usalma(double a, int b){
    double x;
    if(b==0){
        return 1;
    }
    else if (b>=1)
    {   x=1;
        for(int i=0;i<b;i++){
            x*=a;
        }
        return x;
    }
    else if(b<0){
        x=1;
        for(int i=0;i<(-b);i++){
            x*=a;
        }
        return 1/x;
    }
}

int main(){
double taban, sonuc;
int us;
printf("Taban olacak reel sayiyi giriniz: ");
scanf("%lf",&taban);
printf("Us olacak tam sayiyi giriniz: ");
scanf("%d",&us);
sonuc= usalma(taban,us);
printf("Sonuc: %lf",sonuc);
}
