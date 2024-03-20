#include <stdio.h>

int main()
{
  // 将具体磁盘中的文本文件读入到内存中，并将此内容输出到控制台
  // 1.打开文件
  char *filePath = "D:\\Edge\\abc.txt"; // 路径这里使用中文也会出问题
  FILE *file = fopen(filePath, "r");

  // 2.读入过程
  // char buffer1[10];
  // while (fgets(buffer1, 10, file) != NULL)
  // {
  //   printf("%s", buffer1);
  // }

  // fscanf是一次性读取一行
  // 若前面已经读取完毕，可能输出其他东西
  char buffer2[102]; // 若空间太小会报错
  while (fscanf(file, "%s", buffer2) > 0)
  {
    printf("%s1\n", buffer2);
  }
  int a = 10;
  printf("%d\n", sizeof a);

  // 3.关闭文件
  fclose(file);
  return 0;
}