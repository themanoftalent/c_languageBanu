#include <stdio.h>
int main() {
  
  const int x = 101, y = 151;
  const float z = 150.6;
  float kume[3];
  
  kume[0]=x;
  kume[1]=y;
  kume[2]=z;

  for(int i=0;i<3;i++){
    printf("%.1f\n",kume[i]);
  }

return 0;
}