// #include <stdio.h>

// void quickSort(int arr[], int start, int end)
// {

//   int base = arr[start];
//   int low = start;
//   int high = end + 1;
//   int temp0, temp1;
//   if (start >= end)
//     return;
//   while (1)
//   {
//     while (low < end && arr[++low] < base)
//     {
//     };
//     while (high > start && arr[--high] > base)
//     {
//     };
//     if (low < high)
//     {
//       temp0 = arr[low];
//       arr[low] = arr[high];
//       arr[high] = temp0;
//     }
//     else
//     {
//       break;
//     }
//   }
//   {
//     temp1 = arr[low];
//     arr[low] = arr[start];
    
//     arr[start] = temp1;
//     quickSort(arr, start, high - 1);
//     quickSort(arr, high + 1, end);
//   }
// }

// int main(char *args, int argv)
// {
//   int arr[] = {1, 66, 32, 232, 11, 1, 54, 7};
//   int size = sizeof(arr) / sizeof(int);
//   for (int i = 0; i < size; i++)
//     printf("%d\t", arr[i]);
//   printf("\n");

//   quickSort(arr, 0, size - 1);
//   for (int i = 0; i < size; i++)
//     printf("%d\t", arr[i]);
//   printf("\n");

//   getchar();
//   return 0;
  
// }

