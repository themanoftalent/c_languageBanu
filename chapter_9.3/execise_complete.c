#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>

using namespace std;
class Solution
{
    double sonuc = 1;
    public:
    double myPow(double x,int n){
        if(n>0){
            for(int i = 0;i<n; i++){
                sonuc *= x;
            }
           
            cout<<"sonuc ="<<sonuc<<endl;
        }
        else if(n == 0){
            sonuc = 1;
            cout<<"sonuc ="<<sonuc<<endl;
        }
        else{
            n = abs(n);
            for(int i = 0;i<n; i++){
                sonuc *= x;
            }
             sonuc = 1/sonuc;
            cout<<"sonuc ="<<sonuc<<endl;
        }
    }
};

int main(){
    Solution yaz;
    double x;
    int n;
    printf("taban değerini giriniz: ");
    scanf("%lf",&x);
    printf("üs değerini giriniz: ");
    scanf("%d",&n);
    yaz.myPow(x,n);
    return 0;
}
