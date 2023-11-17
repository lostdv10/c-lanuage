#include <stdio.h>

int main()
{

  int a = 10;
  double b = 125.86;
  // 1.正负一元运算
  int c = -a;
  c = -b;
  double d = +a;
  printf("c=%d,d=%lf\n", c, d);
  // 加减乘除
  printf("a+b=%f,", a + b);
  printf("a-b=%f,", a - b);
  printf("a*b=%f,", a * b);
  printf("a/b=%f,", a / b);
  printf("10/3=%f,", 10 / 3); // 类型不匹配，输出0.000000
  printf("10/3=%d,", 10 / 3); // 整数除法

  // 取余
  printf("10 % 3=%d,", 10 % 3);     // 余数与被除数的符号相同
  printf("10 % -3=%d,", 10 % (-3)); // 余数与被除数的符号相同,10=(-3)*(-3)+(-1)

  // 4.自增自减
  int x = 10, y = 10;
  int i1 = x++;
  int i2 = ++y;
  printf("x=%d,y=%d\n", x, y);
  printf("i1=%d,i2=%d\n", i1, i2);
  int i3 = x--;
  int i4 = --y;
  printf("x=%d,y=%d\n", x, y);
  printf("i3=%d,i4=%d\n", i3, i4);

  return 0;
}