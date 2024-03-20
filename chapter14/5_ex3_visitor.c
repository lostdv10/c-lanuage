#include <stdio.h>
#include <string.h>

struct Visitor
{
  char name[20];
  int age;
  double pay;
};
void  checkVisitor(struct Visitor *pv);

int main(){
  struct Visitor visitor;
  while(1){
    printf("请输入你的名字，输入n退出:");
    scanf("%s",visitor.name);
    if(!strcmp(visitor.name,"n"))
      break;
    printf("请输入你的年龄：");
    scanf("%d",&visitor.age);
    checkVisitor(&visitor);
    printf("游客需要支付的票价为：%.2f\n",visitor.pay);
  }
  return 0;
}

void  checkVisitor(struct Visitor *pv){
  pv->pay=pv->age>18?20:0;
}