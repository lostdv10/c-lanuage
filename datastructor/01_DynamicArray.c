#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  int *data;       // 指向动态数组的指针
  size_t size;     // 当前数组元素个数
  size_t capacity; // 当前数组容量
} DynamicArray;
// 初始化动态数组
void initDynamicArray(DynamicArray *array, size_t initcapacity)
{
  array->data = (int *)malloc(initcapacity * sizeof(int));
  array->size = 0;
  array->capacity = initcapacity;
}
// 释放动态数组内存
void destroyDynamicArray(DynamicArray *array)
{
  free(array->data);
  array->size = 0;
  array->capacity = 0;
}

// 调整动态数组内存大小
void resizeDynamicArray(DynamicArray *array, size_t newCapcity)
{
  array->data = (int *)realloc(array->data, newCapcity * sizeof(int));
  array->capacity = newCapcity;
}

// 获取动态数组长度
size_t getLength(const DynamicArray *array)
{
  return array->size;
}

// 在指定位置插入新元素
void insertAt(DynamicArray *array, size_t index, int element)
{
  if (index > array->size)
  {
    return;
  }
  if (array->size >= array->capacity)
  {
    size_t newCapacity = array->capacity * 2; // 若容量不足，扩大
    resizeDynamicArray(array, newCapacity);
  }
  for (size_t i = array->size; i > index; i--)
  {
    array->data[i] = array->data[i - 1];
  }
  array->data[index] = element;
  array->size++;
}

void insertEnd(DynamicArray *array, int element)
{
  insertAt(array, array->size, element);
}

// 删除指定位置元素并返回
int deleteAt(DynamicArray *array, size_t index)
{
  if (index >= array->size)
  {
    return -1;
  }
  int deleteElement = array->data[index];
  for (size_t i = index; i < array->size - 1; i++)
  {
    array->data[i] = array->data[i + 1];
  }
  array->size--;
  return deleteElement;
}

int deleteEnd(DynamicArray *array)
{
  return deleteAt(array, array->size - 1);
}
// 遍历所有元素
void print(DynamicArray *array)
{
  for (int i = 0; i < array->size; i++)
  {
    printf("%d  ", array->data[i]);
  }
  printf("\n");
}

int main()
{
  DynamicArray myArray; // 声明动态数组

  // 初始化动态数组
  initDynamicArray(&myArray, 2);
  printf("初始化动态数组,初始容量为2\n");

  // 向动态数组尾部插入元素
  insertEnd(&myArray, 1);
  insertEnd(&myArray, 2);
  printf("向动态数组尾部插入了2个元素\n");
  printf("动态数组当前长度:%zu\n", getLength(&myArray));
  printf("abc\n");
  print(&myArray);

  // 打印动态数组当前长度
  printf("动态数组当前长度:%zu\n", getLength(&myArray));

  // 在索引1的位置插入元素3
  insertAt(&myArray, 1, 3);
  printf("在索引1的位置插入元素3\n");

  // 再次打印动态数组当前长度
  printf("动态数组当前长度:%zu\n", getLength(&myArray));
  printf("abc\n");
  print(&myArray);

  // // 删除索引1的元素
  // printf("删除索引1的元素,该元素是%d\n", deleteAt(&myArray, 1));

  // // 删除动态数组末尾元素
  // printf("删除动态数组末尾元素,该元素是%d\n", deleteEnd(&myArray));

  // 释放动态数组内存
  destroyDynamicArray(&myArray);
  printf("动态数组内存释放完成\n");
  getchar();

  return 0;
}

// #include <stdio.h>
// #include <stdlib.h>

// // 动态数组结构体
// typedef struct
// {
//     int *data;       // 指向动态数组的指针
//     size_t size;     // 当前数组中的元素个数
//     size_t capacity; // 当前数组的容量（可以容纳的最大元素个数）
// } DynamicArray;

// // 初始化动态数组
// void initDynamicArray(DynamicArray *array, size_t initialCapacity)
// {
//     array->data = (int *)malloc(initialCapacity * sizeof(int)); // 分配初始内存
//     array->size = 0;                                            // 初始化元素个数为0
//     array->capacity = initialCapacity;                          // 设置初始容量
// }

// // 释放动态数组内存
// void destroyDynamicArray(DynamicArray *array)
// {
//     free(array->data);   // 释放动态数组内存
//     array->size = 0;     // 重置元素个数为0
//     array->capacity = 0; // 重置容量为0
// }

// // 调整动态数组内存大小
// void resizeDynamicArray(DynamicArray *array, size_t newCapacity)
// {
//     array->data = (int *)realloc(array->data, newCapacity * sizeof(int)); // 调整数组内存大小
//     array->capacity = newCapacity;                                        // 更新容量
// }

// // 获取动态数组长度（元素个数）
// size_t getLength(const DynamicArray *array)
// {
//     return array->size; // 返回数组中的元素个数
// }

// // 在指定位置插入新元素
// void insertAt(DynamicArray *array, size_t index, int element)
// {
//     if (index > array->size)
//     {
//         return; // 忽略无效的插入位置
//     }

//     if (array->size >= array->capacity)
//     {
//         size_t newCapacity = array->capacity * 2; // 如果容量不足，扩大容量
//         resizeDynamicArray(array, newCapacity);
//     }

//     for (size_t i = array->size; i > index; i--)
//     {
//         array->data[i] = array->data[i - 1]; // 后移元素以腾出插入位置
//     }

//     array->data[index] = element; // 在指定位置插入新元素
//     array->size++;                // 更新元素个数
// }

// // 在末尾插入新元素
// void insertEnd(DynamicArray *array, int element)
// {
//     insertAt(array, array->size, element); // 在末尾插入新元素
// }

// // 删除指定位置的元素并返回被删除的元素
// int deleteAt(DynamicArray *array, size_t index)
// {
//     if (index >= array->size)
//     {
//         return -1; // 忽略无效的删除位置
//     }

//     int deletedElement = array->data[index]; // 获取被删除的元素

//     for (size_t i = index; i < array->size - 1; i++)
//     {
//         array->data[i] = array->data[i + 1]; // 前移元素以填补删除位置
//     }

//     array->size--; // 更新元素个数

//     return deletedElement; // 返回被删除的元素
// }

// // 删除末尾的元素并返回被删除的元素
// int deleteEnd(DynamicArray *array)
// {
//     return deleteAt(array, array->size - 1); // 删除末尾的元素
// }

// // 遍历所有的元素
// void print(DynamicArray *array)
// {
//     for (int i = 0; i < array->size; i++)
//     {
//         printf("%d  ", array->data[i]);
//     }
//     printf("\n");
// }

// int main()
// {
//     DynamicArray myArray; // 声明动态数组

//     // 初始化动态数组
//     initDynamicArray(&myArray, 2);
//     printf("初始化动态数组,初始容量为2\n");

//     // 向动态数组尾部插入元素
//     insertEnd(&myArray, 1);
//     insertEnd(&myArray, 2);
//     printf("向动态数组尾部插入了2个元素\n");
//         print(&myArray);

//     // 打印动态数组当前长度
//     printf("动态数组当前长度:%zu\n", getLength(&myArray));

//     // 在索引1的位置插入元素3
//     insertAt(&myArray, 1, 3);
//     printf("在索引1的位置插入元素3\n");

//     // 再次打印动态数组当前长度
//     printf("动态数组当前长度:%zu\n", getLength(&myArray));
//     print(&myArray);

//     // 删除索引1的元素
//     printf("删除索引1的元素,该元素是%d\n", deleteAt(&myArray, 1));

//     // 删除动态数组末尾元素
//     printf("删除动态数组末尾元素,该元素是%d\n", deleteEnd(&myArray));

//     // 释放动态数组内存
//     destroyDynamicArray(&myArray);
//     printf("动态数组内存释放完成\n");
//     getchar();
//     return 0;
// }
