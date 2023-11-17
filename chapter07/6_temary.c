#include <stdio.h>

int main(){
  //三元运算符
  int a=10,b=20;
  int c = a>b?100:200;

  int d =a>b?a:b;
  int e = c>d?c:d;

  e=c>(d=a>b?a:b)?c:d;
  printf("%d",e);

  return 0;
}
