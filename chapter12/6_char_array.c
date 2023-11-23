#include <stdio.h>

int main()
{
  // 字符数组表示字符串
  char str1[] = "hello world";
  printf("str1=%s\n", str1);
  // 字符指针表示字符串
  char *str2 = "Hello World";

  printf("str2=%s\n", str2);

  // 区别：
  //  str1 = "hello tom";//不能通过数组名修改，而是要通过元素一个个修改
  str2 = "hello tom"; // 可直接修改，但实际是创建了一个新的字符数组，并指向新的字符数组

  return 0;
}