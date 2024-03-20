#include <stdio.h>
#include <string.h>

struct FamilyAccount
{
  int hasRecord;      // 默认为0，没有收入或支出登记
  char details[3000]; // 收支记录信息
  double initBalance;
};
j
int loop = 1;

void showDetails(struct FamilyAccount *fAccount){
        printf("1.收支明细\n");
      if (!fAccount->hasRecord)
      {
        printf("当前没有收支明细，。。。来一笔吧。\n");
      }
      else
      {
        printf("%s\n", fAccount->details);
      }
}



void income(struct FamilyAccount *fAccount){
        printf("2 登记收入\n");
      double addmoney;
      char addDetail[100];
      char addDetails[300];
      printf("本次收入金额：");
      scanf("%lf", &addmoney);
      printf("本次收入说明：");
      scanf("%s", addDetail);
      fAccount->initBalance += addmoney;
      // 将用户的输入信息拼接为完整的字符串
      sprintf(addDetails, "收入\t%lf\t\t%lf\t\t%s\n", addmoney, fAccount->initBalance, addDetail);
      strcat(fAccount->details, addDetails);
      fAccount->hasRecord = 1;
}

void pay(struct FamilyAccount *fAccount){
        printf("3 登记支出\n");
      double minusMoney;
      char minusDetail[100];
      char minusDetails[300];
      printf("本次支出金额：");
      scanf("%lf", &minusMoney);
      if (minusMoney > fAccount->initBalance)
      {
        printf("余额不足\n");
        return;
      }
      else
      {

        printf("本次收入说明：");
        scanf("%s", minusDetail);
        fAccount->initBalance -= minusMoney;
        printf("本次支出说明");
        // 将用户的输入信息拼接为完整的字符串

        sprintf(minusDetails, "支出\t%lf\t\t%lf\t\t%s\n", minusMoney, fAccount->initBalance, minusDetail);
        strcat(fAccount->details, minusDetails);
        fAccount->hasRecord = 1;
      }
}

void goExit()
{
  printf("4 退    出\n");
  printf("你确定要退出吗,y/n?");

  char isExit;

  while (1)
  {
    scanf("%c", &isExit); // 接受之前的\n
    printf("%c\n", isExit);
    scanf("%c", &isExit);
    printf("%c\n", isExit);

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
}

void menu(struct FamilyAccount *fAccount)
{
  // 整体收支记录的循环

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
      showDetails(fAccount);

      break;
    case 2:
      income(fAccount);

      break;
    case 3:
      pay(fAccount);

      break;
    case 4:
      goExit();
      break;
    }
  }
}

  int main()
  {
    struct FamilyAccount fAccount;
    fAccount.hasRecord = 0;
    strcpy(fAccount.details, "----------当前收支明细-----------\n收支\t收支金额\t\t账户金额\t\t说明\n;");
    fAccount.initBalance = 1000;

    menu(&fAccount);

    return 0;
  }