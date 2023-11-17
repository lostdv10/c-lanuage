#include <stdio.h>

int main(){
  //逻辑运算符
  //与&& ， 或|| ，非!
  double score = 75;

  if(score<=80&&score>=60)
    printf("合格\n");
  else
    printf("不合格\n");
  //逻辑运算符是短路运算，可由第一项得到最终结果时，第二项不去计算
  int a=10;
  if(score >=60&&++a<100)
  {
    printf("合格！\n");
  }
  if(score<0||score>100){
    printf("不合理的分数");
  }
  if(!(score>=60))
    printf("不及格\n");


  return 0;
}