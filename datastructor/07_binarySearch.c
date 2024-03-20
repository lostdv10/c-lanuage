#include <stdio.h>

int binarySearch(int arr[], int size, int target)
{
  int low = 0;
  int high = size - 1;
  int middle;
   while (low<=high)
  {

    middle = low+( high-low) / 2;
    if (arr[middle] == target)
    {
      return middle;
    }
    else if (arr[middle] > target)
      high = middle - 1;
    else
    {
      low = middle + 1;
    }

  }
  return -1;
}

int main()
{
  int arr[] = {4, 7, 9, 12, 16, 22, 28, 34, 57, 78, 90};
  int target = 12;
  int size = sizeof(arr)/sizeof(int);
  int index=binarySearch(arr,size,12);
  printf("%d\n",index);//-1代表未找到 
  getchar();
  return 0;
}