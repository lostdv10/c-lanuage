#include <stdio.h>

int main()
{
  // 整型提升
  short s = 100;
  int n1 = 2000;
  printf("s+n= %d大小\n"), ziseof(s + n1);

  // 有符号数转换为无符号数
  int n2 = 200;

  // 浮点类型，精度低想精度高转换
  float f = 1.45;

  // 整型转为浮点型

  // 强制类型转换
  double d4 = 2.23;
  double d5 = -5.5;
  int num1 = (int)(64 + d5);

  return 0; 
}
