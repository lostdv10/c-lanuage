#include <stdio.h>

enum WEEKDAY{
  MON=1,//第一个默认为0
  TUE,
  WED,
  THUR=10,
  FRI,
  SAT,
  SUN,
};
enum SEASON{
  SPRING=1,
  SUMMER,
  AUTUMN,
  WINTER,
} season;
int main(){
  enum WEEKDAY wd=FRI;
  printf("wd=%d",wd);
  //遍历枚举值
  for(wd = MON;wd<SUN;wd++){
    printf("%d\t",wd);
  }

  //使用switch处理枚举值
  printf("请输入你喜欢的季节，1，2，3，4:");
  scanf("%d",&season);
  switch(season){
    case SPRING:printf("你喜欢春天\n");break;
    case SUMMER:printf("你喜欢夏天\n");break;
    case AUTUMN:printf("你喜欢秋天\n");break;
    case WINTER:printf("你喜欢冬天\n");break;
    default:printf("输入有误");
  }
  return 0;
}