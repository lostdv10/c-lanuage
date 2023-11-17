#include <stdio.h>
#include <stdint.h>

int main(){
  //短整型
  short a1 = 32769;
  signed short a2 = 32769;
  unsigned short a3 = -20;
  //整型
  int b1 =100;
  unsigned int b2 = 200;

  //长整型
  long c1 = -1000L;
  unsigned long c2 = -2000L;

  //长长整型
  long long d1 = 10000LL;
  unsigned long long d3 = -20786786870ULL;
  printf("a1 = %d,a2 = %hd, a2 = %d,a3 = %d\n",a1,a2,a2);

  printf("b1 = %d,b2 = %d, c2 = %ld\n,d3 = %lld",b1,b2,c2,d3);

  //精确快读类型
  int32_t e1 = 1324;
  printf("e1 = %d",e1);



  return 0;
}