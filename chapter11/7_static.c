#include <stdio.h>
static int b=1;
//定义一个函数，记录自己被调用多少次，并返回
int count(){
  static int n=0;
  n++;
  printf("我已经调用了%d次",n);
  return n;
}
int main(){
  count();
  count();
  count();

  return 0;
}