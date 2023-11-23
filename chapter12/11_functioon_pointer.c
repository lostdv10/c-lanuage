#include <stdio.h>

int max(int,int);

int main(){

  printf("max(13,52)=%d\n",max(13,52));
  int (*fp)(int,int)=max;
  //通过函数指针调用函数
  int a=19,b=56;
  int result = (*fp)(a,b);
  printf("max(a,b):%d\n",result);
  return 0;
}

int max(int a,int b){
  return a>b?a:b;
}