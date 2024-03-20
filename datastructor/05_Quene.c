#include <stdio.h>
#include <stdlib.h>

// 使用循环来实来处理队列溢出

// 队列结构
typedef struct
{
  // int *data;       // 动态数组存储队列元素
  // size_t size;     // 队列内元素个数
  // size_t capacity; // 动态数组的容量
  // size_t front;    // 队列头指针
  // size_t rear;     // 队列尾指针
  int *data;
  int capacity;
  int size;
  int front; // 出队索引位置
  int rear;  // 入队索引位置

} Queue;

// 初始化队列
void initQueue(Queue *queue, size_t capacity)
{
  // queue->data = (int *)malloc(capacity * sizeof(int)); // 分配初始容量的内存
  // queue->size = 0;                                     // 初始元素个数为0
  // queue->capacity = capacity;                          // 设置容量
  // queue->front = 0;                                    // 队列头指针
  // queue->rear = 0;                                     // 队列尾指针
  queue->data = (int *)malloc(capacity * sizeof(int));
  queue->capacity = capacity;
  queue->size = 0;
  queue->front = 0;
  queue->rear = 0;
}

// 返回队列内元素个数
size_t getSize(const Queue *queue)
{
  // return queue->size;
  return queue->size;
}

// 添加新元素
void enqueue(Queue *queue, int element)
{
  // if (queue->size == queue->capacity)
  // {
  //     // 如果队列已满，需要扩展容量
  //     queue->capacity *= 2;
  //     queue->data = (int *)realloc(queue->data, queue->capacity * sizeof(int));
  // }
  // queue->data[queue->rear] = element;                // 将元素添加到队列尾部
  // queue->rear = (queue->rear + 1) % queue->capacity; // 循环更新队列尾指针
  // queue->size++;                                     // 更新元素个数
  if (queue->size == queue->capacity)
  {
    printf("入队失败，已满\n");
    return;
  }
  queue->data[queue->rear] = element;
  queue->size++;
  queue->rear = (queue->rear + 1) % queue->capacity;
}

// 元素出队列
int dequeue(Queue *queue)
{
  // if (queue->size == 0)
  // {
  //     return -1; // 队列为空，返回无效值
  // }
  // int dequeuedElement = queue->data[queue->front];     // 获取队列头部元素
  // queue->front = (queue->front + 1) % queue->capacity; // 循环更新队列头指针
  // queue->size--;                                       // 更新元素个数
  // return dequeuedElement;                              // 返回出队的元素
  if (queue->size == 0)
  {
    printf("队列为空，出队失败\n");
    return -1;
  }
  int dqueueData = queue->data[queue->front];
  queue->size--;
  queue->front = (queue->front + 1) % queue->capacity;
  return dqueueData;
}

// 释放队列内存
void destroyQueue(Queue *queue)
{
  // free(queue->data); // 释放动态数组内存
  // queue->data = NULL;
  // queue->size = 0;
  // queue->capacity = 0;
  // queue->front = 0;
  // queue->rear = 0;
  free(queue->data);
  queue->data = NULL;
  queue->size = 0;
  queue->capacity = 0;
  queue->front = 0;
  queue->rear = 0;
}

void printQueue(Queue *queue)
{
  for (int i = queue->front; i < (queue->front + queue->size) % queue->capacity; i++)
    printf("%d\t", queue->data[i % queue->capacity]);
  printf("\n");
}

int main()
{

  Queue myQueue;

  // 初始化队列
  initQueue(&myQueue, 5);
  printf("初始化队列,初始容量为5\n");

  // 入队元素
  enqueue(&myQueue, 1);
  enqueue(&myQueue, 2);

  printf("队列内元素个数:%zu\n", getSize(&myQueue));
  printQueue(&myQueue);

  // 出队元素
  printf("出队元素:%d\n", dequeue(&myQueue));

  // 释放队列内存
  destroyQueue(&myQueue);
  printf("队列内存已释放\n");
  getchar();
  return 0;
}
