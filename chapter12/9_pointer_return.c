#include <stdio.h>
#include <string.h>

//定义一个函数，返回两个字符串中较长的那个
char * strlong(char *,char *);
int main(){
char *str1="hello world";
char *str2="I'm studying";
char *longer = strlong(str1,str2);
printf("更长的是%s",longer);

}

char* strlong(char * str1,char *str2){

  //注意：返回指针类型时，返回值是一个地址，但不要给局部变量的指针
  char c='a';

  return strlen(str1)>strlen(str2)?str1:str2;
  // return &c;这里指向局部变量c,返回后，指向的c其实已经被系统回收，有此需要请使用返回 值，而不是返回 指针


}