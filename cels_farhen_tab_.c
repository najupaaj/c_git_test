#include <stdio.h>
int main(){
  float cels, farhen;
  int lower, upper, step;
  lower = 0, upper = 100, step = 30;
  
  cels = lower;

  while(cels <= upper){
    farhen = ((9.0/5.0) * cels) + cels;
    printf("%2.2f,\t %2.2f\n",cels, farhen);
    cels += step;
  }
}
