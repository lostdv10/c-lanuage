#include <stdio.h>
#include <stdbool.h>



int main(){
  //补丁，可直接使用
  _Bool isPass  = -4;
  _Bool isFail = 0;

  //头文件stdbool.h
  bool a1 = 2;
  bool a2 = 0;

  printf("isPass = %d,isFail = %d\n",isPass,isFail);
  if(isPass){
    printf("PASS");
  }
  else{
    printf("FALSE");
  }



  return 0;
}