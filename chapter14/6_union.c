#include <stdio.h>

union Score
{
  int i;
  double d;
  char c;
};

int main()
{
  union Score score;
  union Score score1 = {.c = 4};
  union Score score1 = {4}; // 默认给首成员赋值
  score.i = 98;
  score.c = 'A';
  printf("score.c=%c\n", score.c);
  printf("score.c=%d\n", score.i);
  printf("score.c=%d\n", score.d);
  printf("score的大小为%d", sizeof(score));
  return 0;
}