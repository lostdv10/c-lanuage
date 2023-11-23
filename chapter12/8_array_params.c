#include <stdio.h>

double getAvg(int *arr, int size)
{
  double sum = 0;
  for (int i = 0; i < size; i++)
  {
    // arr也可当作指针访问
    //  sum+=*arr;
    //  arr++;
    // 或 sum+=*(arr+i);
    //arr也可当作数组访问
    sum += arr[i];
  }
  return sum / size;
}

int main()
{
  int nums[] = {1000, 2, 3, 17, 50};
  double avg;
  avg = getAvg(nums, 5); // 调用函数需要传入数组大小
  printf("avg=%.2f", avg);

  return 0;
}