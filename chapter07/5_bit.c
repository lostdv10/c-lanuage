#include <stdio.h>

int main(){
  int a = 17;
  int b = -12;
  printf("a:%#x\n",a);
  printf("b:%#x\n",b);//补码
  //按位与,或,异或，取反
  printf("a&b%d\n",a&b);
  printf("a|b%d\n",a|b);
  printf("a^b%d\n",a^b);
  printf("~b%#x\n",~b);//补码取反，在找其对应数字

  //移位
  
  printf("a<<2:%d\n",a<<2);//左移扩大，右移减小，乘或除以2^位移数，溢出则截取
  printf("b<<2:%d,%#x\n",b<<2,b<<2);//补码表示，前面的符号位1虽然出去了，但后面的很多位依然是1
  printf("b>>3:%d,%#x\n",b>>3,b>>3);//右移时，在左边补符号位，无符号数补0，并且余数取正数，如-12/2^3=-2余数为4


  return 0;
}