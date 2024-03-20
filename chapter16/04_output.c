#include <stdio.h>

int main()
{
  // 将内存中的数据写出到具体的文件。--->使用输出流实现
  //  1.打开文件，知名输出的文件的位置，名称，以及提供必要的输出流
  char *filePath1 = "abc.txt";
  char *fillePath2 = "D:\\io\\abc.txt";
  // > 相对路径，当前程序所在目录
  // > 绝对路径，以windows为例，包含盘符在内的完整路径
  FILE *file = fopen(filePath1, "a");
  // 2.写出的具体过程

  // //一次打开后多次写出，是连续的
  char buffer1[100] = "你知道我是爱你的\n";
  int isSuceess = fputs(buffer1, file);
  char buffer2[100] = "谢谢你的真心话\n";
  isSuceess = fputs(buffer2, file);

  isSuceess= fprintf(file,"%s,你知道我是爱你的，期限：%d年\n","安红",100);
  if (isSuceess >= 0)
  {
    printf("写出成功");
  }
  else
  {
    printf("写出失败");
  }

  // 3.关闭文件，关闭资源，若不关闭，会导致内存泄漏
  fclose(file);

  return 0;
}