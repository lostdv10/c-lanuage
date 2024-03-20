#include <stdio.h>

struct  Box{
  double length;
  double width;
  double height;
};
double volumn(struct Box *box);
// double volumn(struct Box box);

int main(){
  struct Box box;
  
  printf("请输入长方体的长 宽 高：");
  scanf("%lf,%lf,%lf",&box.length,&box.width,&box.height);

  double result =volumn(&box);
  printf("%f\n",box.length);
  printf("长方体的体积：%.2f\n",result);

  return 0;
}

// double volumn(struct Box box)
// {
//   return box.length*box.width*box.height;
// }

double volumn(struct Box *box)
{
  return box->length*box->width*box->height;
}