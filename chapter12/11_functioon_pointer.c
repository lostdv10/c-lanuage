#include <stdio.h>

int max(int,int);

int main(){

  printf("max(13,52)=%d\n",max(13,52));
  int (*fp)(int,int)=max;
  //通过函数指针调用函数
  int a=19,b=56;
  int result0 = (*fp)(a,b);
  int result1 = fp(a,b);
  // (*fp)(a,b)可简写为fp(a,b);fp为函数指针
  printf("max(a,b):%d,%d\n",result0,result1);
  getchar();
  return 0;
}

int max(int a,int b){
  return a>b?a:b;
}