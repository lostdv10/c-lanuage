#include <stdio.h>

// void func(int n)
// {
//   n++;
// }
void func(int *p){
  (*p) ++;

}

int main()
{
  int a = 100;
  int *pa=a;
  func(pa);
  func(&a);

  printf("a=%d",a);
  return 0;
}