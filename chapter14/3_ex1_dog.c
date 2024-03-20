#include <stdio.h>

struct Dog{

    char* name;
    int age;
    double weight;
  

};

char *say(struct  Dog dog);

int main(){
struct Dog dog={"小黄",2,3.5};
char* result =NULL;
result=say(dog);
printf("小狗信息为：%s\n",result);


  return 0;
}

char *say(struct  Dog dog)
{
  static char info[100];
  // printf("%s,%d,%f,",dog.name,dog.age,dog.weight);
  sprintf(info,"%s,%d,%.2f,",dog.name,dog.age,dog.weight);
  return info;
};
