#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cmath>
using namespace std;
class Solution
{
  float sonuc = 1;
    public:
    float myPow(double x, int n){
      
	  for(int i =0;i<abs(n); i++){
            sonuc *= x;
        }
		 
		if(n<0){
			sonuc = 1.0/sonuc;
		}
   
    else if(n == 0){
        sonuc = 1;
    }
   
    return sonuc;
    }
};
int main(){
    Solution y;
    float sonuc;
    int taban, us;
    cout << "Taban değerini giriniz: ";
    cin >> taban;
    cout << "Us değerini giriniz: ";
    cin >> us;
    sonuc = y.myPow(taban,us);
    cout << sonuc;
    return 0;
 
}
