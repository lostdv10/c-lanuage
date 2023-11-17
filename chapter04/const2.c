#include <stdio.h>

int main(){
  const double PI = 3.14;
  double r = 3.4;
  char b = 245;//这里超出后用补码表示
  unsigned char c = 255;
  double area = PI * r * r;
  printf("area = %f, b = %d, %d", area,b,c);
  return 0;
}