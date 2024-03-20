#include <stdio.h>
#include <string.h>

int main()
{

    // 定义相关的变量
    int key = 0; // 表示用户输入了哪个菜单 1：收支明细  2：登记收入 3：登记支出 4：退出
    int loop = 1;   // 控制是否退出菜单
    char details[3000] = "-----------------当前收支明细记录-----------------\n"
                         "收支\t收支金额\t账户金额    \t说  明"; // 记录所有的收入和支出情况
    char note[20] = "";                                          // 对收入或者支出的说明
    char temp[100] = "";                                         // 是用于格式化每次的收入或者支出，然后拼接到details
    double money = 0.0;
    double balance = 1000.0; // 账号余额, 初始化为1000.0
    char choice = ' ';       // 表示用户选择的是y/n
    int flag = 0;            // 表示是否有至少一笔收入或者支出

    do
    {
        printf("\n\n---------家庭收支记账软件-----------------");
        printf("\n         1 收支明细");
        printf("\n         2 登记收入");
        printf("\n         3 登记支出");
        printf("\n         4 退    出");
        printf("\n         请选择(1-4)：");
        scanf("%d", &key);

        switch (key)
        {
        case 1:
            if (flag)
            {
                printf("%s", details);
            }
            else
            {
                printf("\n当前没有收支明细... 来一笔吧!");
            }
            break;
        case 2:
            printf("\n本次收入金额：");
            scanf("%lf", &money);
            balance += money; // 更新余额
            printf("\n本次收入说明：");
            scanf("%s", note);
            sprintf(temp, "\n收入\t%.2f\t\t%.2f\t\t%s", money, balance, note); // 将本次信息，写入到temp字符数组
            // 将信息拼接到 details
            strcat(details, temp);
            flag = 1;
            break;
        case 3:
            printf("\n本次支出金额：");
            scanf("%lf", &money);
            // 判断是否够支出
            if (money > balance)
            { // 不够
                printf("\n 余额不足...");
                break;
            }
            printf("\n本次支出说明：");
            scanf("%s", note);
            balance -= money;
            sprintf(temp, "\n支出\t%.2f\t\t%.2f\t\t%s", money, balance, note); // 将本次信息，写入到temp字符数组
            // 将信息拼接到 details
            strcat(details, temp);
            flag = 1;
            break;
        case 4:
            printf("\n你确定要退出吗(y/n)：");
            do
            {
                scanf("%c", &choice);
				 scanf("%c", &choice);
                if (choice == 'y' || choice == 'n')
                {
                    break;
                }
                printf("\n你的输入有误，请重新输入(y/n)：");
            } while (1);

            if (choice == 'y')
            {

                loop = 0;
            }
        }

    } while (loop);

    printf("你退出了家庭财务软件~~");

    return 0;
}
