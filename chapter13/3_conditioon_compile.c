#include <stdio.h>

#if 0
  #define PI 3.14
#elif 1
  #define Pi 1234
#else
  #define Pi 3.1415926
#endif

int main(){

  return 0;
}

#ifdef FOO
  #define Bar 200

#endif