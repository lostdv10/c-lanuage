#include <stdio.h>
#include <stdlib.h>

int main(){
  int *p=NULL;
  p=(int*)calloc(5,sizeof(int));
  if(p==NULL){
    return -1;
  }
  //calloc自动赋值元素=0
  for(int i=0;i<5;i++){
    printf("%d\t",p[i]);
  }
  free(p);
  return 0;
}
