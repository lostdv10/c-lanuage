#include <stdio.h>

// 顺序查找
int sequeueSearch(int arr[], int size, int target)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == target)
      return i;
  }
  return -1;
}

int main()
{
  int arr[] = {23, 45, 76, 22, 88, 9, 12, 22, 78};
  int index = sequeueSearch(arr, sizeof(arr) / sizeof(int), 22);
  if (index == -1)
  {
    printf("未找到\n");
  }
  else
  {
    printf("索引为%d", index);
  }
  getchar();
}