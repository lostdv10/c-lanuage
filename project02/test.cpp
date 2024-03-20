#include <stdio.h>
#include <string.h>
// fgets会吞掉空格，回车，并保存空格，回车
int main()
{
  // printf("你好：");
  // int num = 10;
  // char shuzu0[30];
  // fgets(shuzu0, 30, stdin);
  // printf("%s", shuzu0);
  // puts(shuzu0);
  // char *shuzu2;
  // gets(shuzu2);
  // printf("%s777\n", shuzu2);
  // printf("%d %d %d\n", num++, num++, num++);
  // printf("你好\n");

  // char c1 = 'x';
  // char shuzu1[10] = "hello!";
  // char c2 = 'y';
  // char c3 = 'z';
  // printf("%p,%p,%p,%p,%p\n", &c1, &shuzu1[0], &shuzu1[1], &c2, &c3);

  // 按照定义先后顺序输出变量地址，整体是地址从大到小，单个变量内部是从小到大

  int i = 3;
  // int k = 0;
  int aa[5] = {0};
  // int j=(i++)+(i++)+(k=i++);
  int d = (aa[0] = ++i) + (aa[1] = ++i) + (aa[2] = ++i) + (aa[3] = ++i) + (aa[4] = ++i);
  ;

  for (int i = 0; i < 5; i++)
  {
    printf("aa[%d]=%d\t", i, aa[i]);
  }

  // printf("%d,%d,%d\n",i,k,j);
  printf("\n%d\n", d);

  i = 3;
  d = (++i) - (++i) - (++i) - (++i) - (++i);
  printf("\n%d\n", d);

  char str1[20] = "#1 ding hello";
  char *str2 = strtok(str1, " ");
  printf("%s,\t%s\n", str1, str2);

  // 要分割的字符串
  char str[] = "apple,banana,cherry";

  // 定义分隔符
  const char *delimiter = ",";

  char *token = strtok(str, delimiter);
  while (token != NULL)
  {
    printf("%s\n", token);
    token = strtok(NULL, delimiter);
  }

  getchar();

  return 0;
}