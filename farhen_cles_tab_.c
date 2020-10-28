#include <stdio.h>
/*print Fahrenheit-Celsius table
  for fahr = 0,20, 40, ......... 300 */
int main(){
  int farh, celsius, lower, upper, step;
  lower = 0, upper = 300, step = 20;
  farh = lower;
  while( farh <= upper)
  {
    celsius = 5 * (farh - 32) / 9;
    printf("%4d,\t%4d \n\n",farh, celsius);
    farh = farh + step;
  }
}
