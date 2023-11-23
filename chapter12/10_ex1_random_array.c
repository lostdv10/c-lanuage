#include <stdio.h>
#include <stdlib.h>
//实现以一个随机生成10个整数
int* randArr();

int main(){
int *arr;
arr=randArr();
for(int i=0;i<10;i++){
  printf("随机数组的第%d个元素为%d\n",i+1,arr[i]);
}
return 0;
}

int* randArr(){
  static int a[10];//static变量会放在全局静态区
  for(int i=0;i<10;i++){
    a[i]=rand();
  }
  return a;
}
