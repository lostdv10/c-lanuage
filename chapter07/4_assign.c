#include <stdio.h>

int main(){
  int a;a=10;

  const int b;//随机值
  // b=100;
  a+=3;

  printf("a=%d\n",a);
  printf("b=%d\n",b);
  int c,d;
  d=c=a;
  c*=a;


  return 0;
}