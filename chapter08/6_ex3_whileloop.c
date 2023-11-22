#include <stdio.h>

int main(){
//判断密码是否相等

  const int pwd1 = 123456;
  int pwd2=0;
  while(pwd1!=pwd2){
    printf("请输入6位密码:");
    scanf("%d",&pwd2);
  }
  printf("密码正确，欢迎回家！\n");

  return 0;
}