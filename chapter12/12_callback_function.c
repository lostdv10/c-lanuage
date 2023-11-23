#include <stdio.h>
#include <stdlib.h>

int zero(){
  return 0;
}

int one(){
  return 1;
}


void initArr(int * array,int size,int (*f)()){
    for(int i=0;i<10;i++){
    array[i]=(*f)();
  }
}



int main(){
  //定义一个长度为10 的数组
  int arr[10];
  //初始化数组，传入一个函数，作为初始化的具体方法
  initArr(arr,10,rand);
  initArr(arr,10,zero);//全0初始化
  initArr(arr,10,one);//全1初始化
  //便利数组元素打印
  for(int i = 0;i<10;i++){
    printf("arr[%d]=%d\n",i,arr[i]);
  }
  return 0;
}