#include <stdio.h>
#include <stdlib.h>

// 栈结构
typedef struct
{
  int *data;
  size_t size;
  size_t capacity;
} Stack;

// 初始化栈
void initStack(Stack *stack, size_t capacity)
{
  stack->data = (int *)malloc(capacity * sizeof(int));
  stack->size = 0;
  stack->capacity = capacity;
}

// 返回栈内元素个数
size_t getSize(const Stack *stack)
{
  return stack->size;
}

// 添加新元素
void push(Stack *stack, int element)
{
  if (stack->size == stack->capacity)
    ;
  // 栈满则扩容
  {
    stack->capacity *= 2;
    stack->data = (int *)realloc(stack->data, stack->capacity * sizeof(int));
  }
  // capacity+capacity>>1;//扩容1.5倍
  stack->data[stack->size] = element;
  stack->size++;
}

// 栈顶元素出栈并返回
int pop(Stack *stack)
{
  if (stack->size == 0)
  {
    printf("当前栈已空");
    return -1;
  }
  int popElement = stack->data[stack->size - 1];
  stack->size--;
  return popElement;
  // 或者写为return stack->data[--stack->size];
}

// 释放栈内存
void destroyStack(Stack *stack)
{
  free(stack->data);
  stack->data = NULL;
  stack->size = 0;
  stack->capacity = 0;
}

int main()
{

  Stack myStack;

  // 初始化栈
  initStack(&myStack, 4);
  printf("初始化栈,初始容量为4\n");

  // 向栈压入元素
  push(&myStack, 1);
  push(&myStack, 2);

  printf("栈内元素个数:%zu\n", getSize(&myStack));

  // 弹出栈顶元素
  printf("弹出栈顶元素:%d\n", pop(&myStack));

  // 释放栈内存
  destroyStack(&myStack);
  printf("栈内存已释放\n");

  getchar();
  return 0;
}
