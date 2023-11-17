#include <stdio.h>

int main(){
  //单精度类型
  float a1 = 12.3334F;
  //双精度
  double b1 =324.3443;
  //长双精度
  long double c1 = 243.34;
  printf("a1 = %.3f\n",a1);//%f适用于float,double(double也可用%lf)
  //long double 需要使用%Lf(这里大小写敏感)
  //在scanf中，%f表示float,%lf表示%lf
  printf("b1 = %.1e",b1);//保留一位，可同学计数法



  return 0;
}