#include <stdio.h>
int main(){
  char char_get;
  char_get = ( getchar() != EOF );
      printf("%i\n", char_get);
      return 0;
}
