#include <stdio.h>


void func1(){}
void func2(){}
void func3(){}


int main(int argc,char* argv[]){
  func1();
  func2();
  func3();
  printf("主函数的参数个数：%d\n",argc);
  for(int i = 0;i<argc;i++)
  printf("主函数的参数：%s\n",argv[i]);


  return 0;//可以省略但不推荐
}