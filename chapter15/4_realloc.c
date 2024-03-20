#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
  int *p = NULL;
  p = (int *)calloc(5, sizeof(int));
  if (p == NULL)
  {
    return -1;
  }
  // calloc自动赋值元素=0
  for (int i = 0; i < 5; i++)
  {
    printf("%d\t", p[i]);
  }

  printf("内存块的大小%zu\n", _msize(p));
  p = (int *)realloc(p, 100);
  printf("p=%p\n", p);
  printf("内存块的大小%zu\n", _msize(p));

  free(p);

  int *ptr = (int *)malloc(25 * sizeof(int)); // malloc申请到的空间初始为随机值
  for (int i = 0; i < 25; i++)
  {
    ptr[i] = i * 3;
  }
  printf("ptr的空间大小为：%zu,位置：%p\n", _msize(ptr), ptr);
  ptr = (int *)realloc(ptr, 200); // realloc得到的初始值也是随机值（原来位置的值）
  for (int i = 0; i < 200 / 4; i++)
  {
    printf("%d\t", ptr[i]);
  }
  printf("ptr的空间大小为：%zu,位置：%p\n", _msize(ptr), ptr);
  free(ptr);



int year = 376, leap = 0; // leap为1为闰年
//leap默认为0，即默认为平年 
if (year % 100 == 0)
{
  if (year % 400 == 0)
    leap = 1;
}
else
{
  if (year % 4 == 0)
    leap = 1;
}
printf("%d\n",leap);



int num1 = 100, num2 = 200;
int *ptr1 = &num1;		// 指针 ptr1 指向 num1
int *ptr2 = ptr1;	    // 指针 ptr2 指向 num1
ptr1 = &num2;			// 指向 ptr1 指向 num2
printf("%d", *ptr2);
  getchar();
  return 0;

}