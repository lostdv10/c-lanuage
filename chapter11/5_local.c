#include <stdio.h>
const int a=200;


int add(int x, int y)
{

  return x + y;
}

int main()
{
  const int a = 100;//覆盖同名全局变量,覆盖时不理会const，不仅值，类型也可以改变
  printf("6+7=%d\n", add(6, 7));
  // int a = 100;//覆盖全局变量a
  {
    extern const  int a;//这里的a是全局的a,由于块级作用域，覆盖main中的a
    printf("全局a=%d\t",a);
  }




  return 0;
}