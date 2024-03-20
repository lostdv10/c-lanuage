#include <stdio.h>
#include <string.h>

int main()
{
  // 1.完成整体框架的搭建
  int loop = 1;                                                                                   // 整体收支记录的循环
  int hasRecord = 0;                                                                              // 默认为0，没有收入或支出登记
  char details[3000] = "----------当前收支明细-----------\n收支\t收支金额\t\t账户金额\t\t说明\n"; // 收支记录信息
  double initBalance = 1000;
  // char *info = "----------当前收支明细-----------\n收支\t收支金额\t\t账户金额\t\t说明";
  // sprintf(details, info);

  while (loop)
  {
    printf("\n\n---------家庭收支记账软件-----------------");
    printf("\n         1 收支明细");
    printf("\n         2 登记收入");
    printf("\n         3 登记支出");
    printf("\n         4 退    出");
    printf("\n         请选择(1-4)：");
    int selection; // 记录用户的选择
    scanf("%d", &selection);
    switch (selection)
    {
    case 1:
      printf("1.收支明细\n");
      if (!hasRecord)
      {
        printf("当前没有收支明细，。。。来一笔吧。\n");
      }
      else
      {
        printf("%s\n", details);
      }

      break;
    case 2:
      printf("2 登记收入\n");
      double addmoney;
      char addDetail[100];
      char addDetails[300];
      printf("本次收入金额：");
      scanf("%lf", &addmoney);
      printf("本次收入说明：");
      scanf("%s", addDetail);
      initBalance += addmoney;
      // 将用户的输入信息拼接为完整的字符串
      sprintf(addDetails, "收入\t%lf\t\t%lf\t\t%s\n", addmoney, initBalance, addDetail);
      strcat(details, addDetails);
      hasRecord = 1;

      break;
    case 3:
      printf("3 登记支出\n");
      double minusMoney;
      char minusDetail[100];
      char minusDetails[300];
      printf("本次支出金额：");
      scanf("%lf", &minusMoney);
      if (minusMoney > initBalance)
      {
        printf("余额不足");
      }
      else
      {

        printf("本次收入说明：");
        scanf("%s", minusDetail);
        initBalance -= minusMoney;
        printf("本次支出说明");
        // 将用户的输入信息拼接为完整的字符串

        sprintf(minusDetails, "支出\t%lf\t\t%lf\t\t%s\n", minusMoney, initBalance, minusDetail);
        strcat(details, minusDetails);
        hasRecord = 1;
      }

      break;
    case 4:
      printf("4 退    出\n");
      printf("你确定要退出吗,y/n?");
      
      char isExit;

      while (1){
      scanf("%c", &isExit);//接受之前的\n
      printf("%c\n",isExit);
      scanf("%c", &isExit);
      printf("%c\n",isExit);
      
        if (isExit == 'y' || isExit == 'n')
        {
          break;
        }
        else
        {
          printf("你的输入有误，请重新输入");
        }
      }
      if (isExit == 'y')
      {
        loop = 0;
        printf("欢迎下次再来！");
        getchar();
        getchar();
      }
      break;
    }
  }

  return 0;
}