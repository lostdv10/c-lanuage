#include <stdio.h>

// 所有函数之外的变量具有全局作用域
int a = 100;
int a0;//全局变量若没有初始值，默认值为0
//局部变量若没有初始化，系统给出随机值
//全局变量与局部变量存储空间不同

const double PI = 3.14;
//使用其他文件的全局变量顺颂关键词extern

// 在函数中定义的不是全局作用域

int add(int x, int y)
{
  printf("a=%d\n", a);
  return x + y;
}

int main()
{
  printf("6+7=%d\n",add(6,7));
  printf("a=%d\n", a);
  return 0;
}