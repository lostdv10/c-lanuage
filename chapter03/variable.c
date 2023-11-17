#include <stdio.h>

int main()
{
  // 声明变量，之后再赋值
  int a;
  a = 100;
  // 声明变量，同时赋值
  int b = 200;
  //变量的值可以改变
  a = 150;
  b = a;
  //同时声明多个变量，并赋值
  int c1 = 200, c2, c3 = 400;
  char d = 'c';
  printf("%d,%c\n",a,d);//无论类型，前后按照顺序输出，若类型不符，尝试转换
  printf("%d,%d,%d\n",c1,c2,c3);
}