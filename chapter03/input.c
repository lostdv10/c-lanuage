#include <stdio.h>

int main(){
  //先声明一个变量
  int n1;
  //可选，输出提示信息
  printf("请输入一个数字：");
  //输入数据，保存到n1中
  scanf("%d",&n1);
  printf("刚才输入的数字是：%d",n1);
  //同时输入多个变量
  int n2,n3,n4;
  printf("请同时输入3个数字，空格分隔：");
  scanf("%d %d %d",&n2,&n3,&n4);
  printf("刚才输入的数据是：n2 = %d, n3 = %d, n4 = %d",n2,n3,n4);



  return 0;
}