#include <stdio.h>

#if  _WIN32
  #include <windows.h>
  #define SLEEP(t) Sleep(t*1000)
#elif __linux__
  #include <unistd.h>
  #define SLEEP Sleep

#endif

int main(){

  SLEEP(5);
  printf("hello,尚硅谷");
}