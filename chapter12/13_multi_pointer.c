#include <stdio.h>

int main(){
  int a =10;
  //定义多级指针
  int *pa = &a;
  int **ppa = &pa;
  int ***pppa = &ppa;
  printf("a=%d,pa=%p,ppa=%p,pppa=%p\n",a,pa,ppa,pppa);
  printf("*pa=%d,*ppa=%p,*pppa=%p,***pppa=%d\n",*pa,*ppa,*pppa,***pppa);


  return 0;
}