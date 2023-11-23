//斐波那契数列
// if(n ==1||n==2) return 1;

#include <stdio.h>

int add(int x,int y){

  return x+y;
}

int main(){
  printf("%d\n",add(7.6,8));

  return  0;
}

//循环实现
// int fib(int n)
// {
//   // 斐波那契数列
//   // 1 1 2 3 5 8 13 21...
//   int a = 1, b = 1, c = 0;
//   for (int i = 3; i <= n; i++)
//   {
//     c = a + b;
//     a = b;
//     b = c;
//   }
//   return c;
// }