#include <stdio.h>

int main()
{
  int nums[5] = { 1, 2, 3, 4, 5 };
  int *ptr = &nums[0];
  printf("数组名的值为：%p\n", nums);
  printf("ptr的值为：%p\n", ptr);



  // 甚至可以用ptr[1],nums+1（交换用法）
  //不同点：数组名类似于指针常量，而普通的指针是变量，不能对数组名重新赋值
  //用sizeof取数组名的大小，得到的是数组的大小，sizeof对指针使用得到的是一个地址的字节数（如在64位系统中是8个字节）
  printf("%zu,%zu",sizeof(nums),sizeof(ptr));
  return 0;
}