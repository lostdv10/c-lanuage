#include <stdio.h>


void pyramid(int);

int main(){
  int num;
  printf("请输入金字塔的层数：");
  scanf("%d",&num);
  pyramid(num);
  return 0;
}

void pyramid(int n){
//循环处理前n-1行
  for(int i =1;i<n;i++){
    //1.每行先打印n-i个空格，
    for(int j=0;j<n-i;j++){
      printf(" ");
    }
    // 2.打印*号
    printf("*");
    // 3.判断是否为第一行
    if(i==1){
      printf("\n");
      continue;
    }
    // 4.中间的空格数
    for(int j =0;j<2*i-3;j++){
      printf(" ");
    }
    // 5.再加一个*号
    printf("*\n");
  }
  for(int i=0;i<2*n-1;i++){
    printf("*");
  }
}