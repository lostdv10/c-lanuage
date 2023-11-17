#include <stdio.h>

int main(){
  int age=0;
  //1.单分支
  printf("请输入年龄：");
  scanf("%d",&age);
  if(age<18){
    printf("未成年请在家长陪同下访问");
  }
  
  printf("程序结束");

  //2.双分支if...else...
  //3多分枝if...else if ...else...
  

  return 0;
}