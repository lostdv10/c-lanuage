#include <stdio.h>

typedef int Interger;
// typedef struct Student Stu;//
//给结构体起别名
typedef struct{
  int id;
  char* name;
  char gen;
  int age;
  char* addr;
}Student;

typedef int* intPtr;//指针其别名


int main(){
  Interger a=100;
  Student stu1;

  return 0;
}