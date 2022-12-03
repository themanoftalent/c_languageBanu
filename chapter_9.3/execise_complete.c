#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double UsAlma(double a, double us){
    int s=0;
    double r;
    
    if(us<0){
        s=1;
        us*=-1;
    }
    for(r=1;us>0; us--){
        r*=a;
    }
    if(s){
        r=1/r;
    }
    return r;
}

int main(){
    double r;
    int a,us;
    printf("sayi giriniz: \n");
	scanf("%d",&a);
	printf("us sayisini giriniz:\n");
	scanf("%d",&us);
    r=UsAlma(a,us);
    printf("Sonuc:%f\n",r);
    return 0;
}
