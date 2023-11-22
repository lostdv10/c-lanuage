#include <stdio.h>

int main()
{
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("i=%d,j=%d\t", i, j);
      /* code */
    }

    /* code */
  }

  for (int i = 1; i < 10; i++)
  {

    for (int j = 1; j <= i; j++)
    {
      {
        printf("%d*%d=%d\t", j, i, i * j);
      }
    }
    printf("\n");
  }
  //第3种
  //注意\t的使用
    for (int i = 1; i < 10; i++)
  {


    for (int j = i; j <9 ; j++)
    {
      {
        printf("\t");
      }
    }
    for (int j = 1; j <=i ; j++)
    {
      {
        printf("%d*%d=%d\t", j, i, i * j);
      }
    }
    printf("\n");
  }

  return 0;
}