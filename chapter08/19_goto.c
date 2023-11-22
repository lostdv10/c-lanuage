#include <stdio.h>

int main()
{
  printf("1\n");
  printf("2\n");
  goto label1;
  printf("3\n");
  printf("4\n");
label1:
{
  printf("5\n");
}
//用goto实现while循环

  return 0;
}