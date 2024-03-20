#include <stdio.h>
// 冒泡排序
void bubbleSort(int arr[], int size)//这里的arr理解为指针
{
  int temp;
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main()
{
  int arr[] = {23, 5, 34, 76 , 5 , -33, 7};
  int size = sizeof(arr) / sizeof(int);
  bubbleSort(arr, size);
  for (int i = 0; i < size; i++)
  {
    printf("%d\t", arr[i]);
  }
  getchar();
  return 0;
}