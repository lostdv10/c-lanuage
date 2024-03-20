#include <stdio.h>
#include <stdlib.h>

int main(){
  int *p=NULL;
  int count = 5;//数组元素个数
  p=(int*)malloc(count*sizeof(int));
  *p=100;
  for(int i=0;i<count;i++){
    *(p+i)=i*10;
  }
    for(int i=0;i<count;i++){
    printf("%d\t",*(p+i));
  }
  printf("%zu\n",p);
  //释放内存
  free(p);
  getchar();
  
  return 0;
}