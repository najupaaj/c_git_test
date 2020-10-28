#include <stdio.h>
int main()
{
  float far, cel;
  for( far = 0 ; far <= 300 ; far += 40){
  cel = ((5.0/9.0) * (far - 32));
  printf("%8.4f, \t\t %2.2f\n",far, cel);
  }
  return 0;
}

