#include <stdio.h>

int main(){
  //getchar,键盘->内存
  //putchar,内存->屏幕

  char c1='a';
  putchar(c1);
  putchar('\n');
  putchar('b');

  char c2=getchar();
  printf('刚才输入的字符是%c',c2);

  return 0;
}