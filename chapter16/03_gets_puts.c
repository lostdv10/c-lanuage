#include <stdio.h>

int main(){
  //puts,讲指定的字符串输出到标准的输出流，比如屏幕
  // gets(),将标准的输入流，比如键盘，中的数据保存到内存中
  char *info="hello world";
  // info="北京今天有点冷";
  puts(info);
  char name[10];
  printf("请输入姓名：");
  // gets(name);
  fgets(name,10,stdin);
  printf("name=%s\n",name);

  return 0;
}