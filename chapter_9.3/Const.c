#include <stdio.h>
int main() {

  const int a=101; 
  const int b= 151;
  const float c = 150.6;
  double arrays[3];

    arrays[0]=a;
    arrays[1]=b;
    arrays[2]=c;

    //printf("c:%.1lf\n",arrays[2]);
    //printf("b:%.0lf\n",arrays[1]);
    //printf("a:%.0lf\n",arrays[0]);

 for (int i=0;i<3;i++)
    {
        printf("%.1lf\n",arrays[i]);
    }
                        

return 0;
}
