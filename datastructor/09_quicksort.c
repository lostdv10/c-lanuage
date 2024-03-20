#include <stdio.h>

// 快速排序
void subSort(int arr[], int start, int end)
{
  if (start >= end)
    return;
  int base = arr[start];
  int low = start;
  int high = end + 1;
  while (1)
  {
    while (low < end && arr[++low] <= base)
    {
    } // 找到第一个比base小的元素
    while (high > start && arr[--high] >= base)
    {
    } // 找到第一个比base大的元素
    if (low < high)
    {
      int temp = arr[low];
      arr[low] = arr[high];
      arr[high] = temp;
    }
    else
    {
      break; // low>=high时，循环结束
    }
  }
  int temp1 = arr[start];
  arr[start] = arr[high];
  arr[high] = temp1;
  subSort(arr, start, high - 1); // 前半段
  subSort(arr, high + 1, end);   // 后半段
}

void quickSort(int arr[], int size)
{
  subSort(arr, 0, size - 1);
}

int main()
{
  // int arr[] = {23, 45, 2, 46, 77, 2, 99, -9, -32, 0, 66};
    int arr[] = {1, 66, 32, 232, 11, 1, 54, 7};

  int size = sizeof(arr) / sizeof(int);
  // 遍历
  for (int i = 0; i < size; i++)
  {
    printf("%d  ", arr[i]);
  }

  printf("\n");

  // 排序
  quickSort(arr, size);

  // 遍历
  for (int i = 0; i < size; i++)
  {
    printf("%d  ", arr[i]);
  }

  printf("\n");

  getchar();
}