#include <stdio.h>

int main(){
int a =100;
int * p1=&a;
printf("a=%d,p=%p\n,&p=%p,*p1=%d\n",a,p1,&p1,*p1);

//修改
*p1=20;
printf("a=%d,p=%p\n,&p=%p,*p1=%d\n",a,p1,&p1,*p1);
int * p2=&a;*
p2+=70;
int *p3 =p1;
//指针指向的数据类型和指针类型需要匹配，否则可能出问题（解析数据时，可能从int的4个变为double的8个）

return 0;
}