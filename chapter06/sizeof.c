#include <stdio.h>

int main(){
  //获取类型的存储大小
  printf("char的大小为：%zu个字节\n",sizeof(char));
  printf("short的大小为：%d个字节\n",sizeof(short));
  printf("int的大小为：%zu个字节\n",sizeof(int));
  printf("float的大小为：%zu个字节\n",sizeof(float));
  printf("double的大小为：%zu个字节\n",sizeof(double));
  printf("long的大小为：%zu个字节\n",sizeof(long));
  printf("long long的大小为：%zu个字节\n",sizeof(long long));
  printf("long double的大小为：%zu个字节\n",sizeof(long double));
  //获取字面值常量的大小,变量大小
  printf("456的大小为：%zu个字节\n",sizeof(456));
  printf(".454的大小为：%zu个字节\n",sizeof(.454));

  


  return 0;
}