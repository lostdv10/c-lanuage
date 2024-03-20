#include <stdio.h>

struct Student{
  int id;
  char* name;
  char gen;
  int age;
  char* addr;
};

void printStudentInfo(struct Student stu);



int main(){
  struct Student stu1;
  stu1.id = 1001;
  stu1.name="小白";
  stu1.gen ='m';
  stu1.age=18;
  stu1.addr="北京昌平";
  printf("%d,%s,%c,%d,%s\n",stu1.id,stu1.name,stu1.gen,stu1.age,stu1.addr);
  struct Student stu2={1002,"小红",'f',20,"上海松江"};

  printStudentInfo(stu1);
  printStudentInfo(stu2);  


  //使用指针处理结构体变量
  struct Student *ptr = &stu1;
  printf("stud1.name = %s\n",(*ptr).name);
  (*ptr).age++;
  printStudentInfo(stu1);
  ptr->addr="北京朝阳";
  return 0;
}
//定义一个结构体变量所有信息的函数
void printStudentInfo(struct Student stu){

printf("%d,%s,%c,%d,%s\n",stu.id,stu.name,stu.gen,stu.age,stu.addr);
}