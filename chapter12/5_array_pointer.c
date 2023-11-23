#include <stdio.h>

int main(){
  int arr[5]={10,20,30,40,50};
  int arr2[8]={1,2,3,4,5,6,7,8};
  int (*ptr)[5]=&arr2;
  int (*arr_ptr)[5]=&arr;//&数组名即数组的地址（其长度为整个数组）

// printf("数组指针arr_ptr的值%p\n",arr_ptr);
// printf("arr的值%p\n",arr);
// printf("&arr的值%p\n",arr);

// printf("数组指针arr_ptr+1的值%p\n",arr_ptr+1);
//   //遍历，并简介访问
//   for(int i=0;i<3;i++){
//     printf("指针数组arr_ptr第%d个元素为%p\n",i,(*arr_ptr)[i]);
//   }
for(int i=0;i<5;i++){
  printf("%d\t",(*ptr)[i]);
}
printf("ptr=%zu,",sizeof((*ptr)[2]));


  return 0;
}

//指针数组其必须指定长度，但其指定长度可以与指向的数组不匹配（当然，后面也可能会问题）