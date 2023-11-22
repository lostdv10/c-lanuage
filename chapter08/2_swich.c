#include <stdio.h>

int main(){
  char day;
  printf("请输入一个字符（a-d)，表示星期");
  scanf("%c",&day);
  switch ((day))
  {
  case 'a':
    printf("今天星期一");
    break;
      case 'b':
    printf("今天星期二");
    break;
      case 'c':
    printf("今天星期三");
    break;
      case 'd':
    printf("今天星期四");
    break;
  
  default:printf("输入有误");
    
  }
  printf("1");


  return 0;
}
//可嵌套