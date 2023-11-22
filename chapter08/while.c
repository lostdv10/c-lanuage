#include <stdio.h>

int main()
{
  double a = 10.7;
  // 基本形式
  while (a > 0)
  {
    printf("OK,%f\n", a);
    a--;
  }
  int num = 0;
  while (num < 10)
  {
    printf("我第%d天共吃了%d个包子\n", num + 1, num + 1);
    num++;
  }

  // 4.10以内所有偶数
  int i = 0;
  while (i <= 10)
  {
    if (i % 2 == 0)
    {
      printf("%d\n",i);
    }
    i++;
    
  }

  return 0;
}