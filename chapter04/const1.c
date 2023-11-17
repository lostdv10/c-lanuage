#include <stdio.h>

//使用宏定义，定义常量
#define PI 3.14

int main(){
  //计算圆的面积
  double area;
  double r = 1.3;
  area = PI * r * r;
  printf("%.2f",area);
  
  return 0;
}