#include <stdio.h>
#include<string.h>

int main(){
  char msg[]="hello",name[]="gyuedvhja";
  printf("msg数组长度：%d",strlen(msg));//获取长度;
  // name = "ALICE";这样不行
  strcpy(name,"ALICE");//
  strcat(msg,name);//拼接

  //从字符串输入输出
  char str1[100];//默认是系统的垃圾值
  char str2[] = "小白";
  int age1=19;
  double score1=69.8;
  sprintf(str1,"我叫%s,我今年%d岁，成绩为%f",str2,age1,score1);
  printf("111%s\n",str1);

  char str3[]="";
  int age2=0;
  double score2=0;

  sscanf(str1,"我叫%s,我今年%d岁，成绩为%f",str3,&age2,&score2);//%s默认将后面所有当作字符串，除非用%数字s
  printf("222我q叫%s,我今年%d岁，成绩为%.3f\n",str3,age2,score2);

return 0;
}