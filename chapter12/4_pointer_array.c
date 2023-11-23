#include <stdio.h>

int main(){
  int num1=10,num2=20,num3=30;
  int* ptr_arr[3];//最后是[],本质为数组
  ptr_arr[0]=&num1;
  ptr_arr[1]=&num2;
  ptr_arr[2]=&num3;

  //遍历，并简介访问
  for(int i=0;i<3;i++){
    printf("指针数组ptr_arr第%d个元素为%p,指向%d\n",i,ptr_arr[i],*ptr_arr[i]);
  }

  return 0;
}

