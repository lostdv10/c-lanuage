#include <stdio.h>

#define N 2
struct Person
{
  char name[20];
  int num; // 编号
  char sex;
  char profession;
  union
  {
    double score;
    char course[10];
  } sc;
};

void printInfoTable(struct Person *);

int main()
{
  struct Person person[N];
  for (int i = 0; i < N; i++)
  {
    printf("请输入第%d个人的信息（姓名 编号 性别 职业）:", i + 1);
    scanf("%s %d %c %c", person[i].name, &person[i].num, &person[i].sex, &person[i].profession);
    if (person[i].profession == 's')
    {
      printf("请录入该学生的成绩：");
      scanf("%lf", &person[i].sc.score);
    }
    else if (person[i].profession == 't')
    {
      printf("请输入该老师所教的科目：");
      scanf("%s", person[i].sc.course);
    }
    else{
      printf("职业错误");
    }
  }
  printInfoTable(person);
  return 0;
}

void printInfoTable(struct Person *p)
{
  printf("姓名\t编号\t性别\t职业\t成绩/科目\n");
  for (int i = 0; i < N; i++)
  {
    if (p[i].profession == 's')
    {
      printf("%s\t%d\t%c\t%c\t%.1f\n", p[i].name, p[i].num, p[i].sex, p[i].profession, p[i].sc.score);
    }
    else if (p[i].profession == 't')
    {
      printf("%s\t%d\t%c\t%c\t%s\n", p[i].name, p[i].num, p[i].sex, p[i].profession, p[i].sc.course);
    }
  }
}