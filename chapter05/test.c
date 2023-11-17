#include <stdio.h>

int main (){
  int a = 100;//十进制
  printf("a=%d\n",a);
  int b = 0b1001001;
  int c = 0x2f;
  int d = 067;
  printf("b=%d,c=%x\n",b,c);//%x十六进制，%#x带前缀0x,%o八进制
  return 0;
}