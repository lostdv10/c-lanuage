#include <stdio.h>
#include <string.h>
#define MAX_CAPACITY 30

struct Customer
{
  int id;
  char name[10];
  char gender;
  int age;
  char phone[20];
  char email[30];
};

struct Customer customers[MAX_CAPACITY];
int total = 0;  // 记录添加的客户的个数
int id_max = 1; // id最大值，（删除用户不影响）
int loop = 1;   // 整体界面的显示

// 判断是否存在该客户
// 如果不存在，返回-1，否则返回索引位置
int getCustomeIndex(int id)
{
  for (int i = 0; i < total; i++)
  {
    if (customers[i].id == id)
      return i;
  }
  return -1;
}

void addCustomer()
{
  if (total >= MAX_CAPACITY)
  {
    printf("客户列表已满，添加失败\n");
    return;
  }

  customers[total].id = id_max++; // id自增，删除不减

  getchar();
  char name[10];
  printf("姓名：");
  scanf("%s", name);
  strcpy(customers[total].name, name);

  getchar();
  char gender;
  printf("性别：");
  scanf("%c", &gender);
  customers[total].gender = gender;

  int age; // 这里应该使用int，但是使用char类型时的错误还可以探究

  // 若age定义为char,只给了1个字节，而实际输入是按照Int,int为4个字节，输入时数据记入第4个字节，前面的置为0，是的前面的变量值变为0
  // 而如果每次输入完毕后豆及时的读取了值，并复制到其他地方，后面输入时即便覆盖了也没有关系
  getchar();
  printf("年龄：");
  scanf("%d", &age);
  customers[total].age = age;

  char phone[20];
  printf("电话：");
  scanf("%s", phone);
  strcpy(customers[total].phone, phone);

  char email[30];
  printf("邮箱：");
  scanf("%s", email);

  strcpy(customers[total].email, email);
  total++;
  printf("添加完成\n");
}

void modifyView()
{
  printf("请选择想要修改的客户的编号：");
  int modifyId;
  scanf("%d", &modifyId);
  if (modifyId == -1)
    return;
  else
  {
    int modifyIndex = getCustomeIndex(modifyId);
    if (modifyIndex == -1)
    {
      printf("不存在该客户，删除失败");
      return;
    }
    struct Customer *cusPtr = &customers[modifyIndex];
    // printf("修改客户\n");
    // getchar();
    // char name[10];
    // printf("姓名(%s)：", cusPtr->name);
    // scanf("%s", name);
    // if(name[0]!='\n'){strcpy(customers[total].name, name);}
    // getchar();
    // char gender;
    // printf("性别(%c)：", cusPtr->gender);
    // scanf("%c", &gender);
    // if(gender!='\n'){strcpy(customers[total].name, name);}
    // int age; // 这里应该使用int，但是使用char类型时的错误还可以探究
    // getchar();
    // printf("年龄(%d)：", cusPtr->age);
    // scanf("%d", &age);
    // if(age!='\n'){strcpy(customers[total].name, name);}
    // char phone[20];
    // printf("电话(%s)：", cusPtr->phone);
    // scanf("%s", phone);
    // if(phone[0]!='\n'){strcpy(customers[total].name, name);}
    // char email[30];
    // printf("邮箱(%s)：", cusPtr->email);
    // if(email[0]!='\n'){strcpy(customers[total].name, name);}
    // scanf("%s", email);

    // fgets会吞掉回车
    // 可能只有回车，也可能是其他内容+回车
    // 不能用scanf,必须使用fgets,有时可能只有回车，有时是其他内容+回车，scanf无法处理，
    // 这时可先使用fgets读入一个较长字符串，判断是否只有回车（即第一个字符即为回车），若不是，再使用sscanf从该字符串读出
    // scanf，或sscanf记得非字符串均要使用&
    char info[30];

    printf("姓名(%s)：", cusPtr->name);
    fgets(info, sizeof(info), stdin);
    if (!(info[0] == '\n'))
    {
      sscanf(info, "%s", cusPtr->name);
    }

    printf("性别(%c)：", cusPtr->gender);
    fgets(info, sizeof(info), stdin);
    if (!(info[0] == '\n'))
    {
      sscanf(info, "%c", &cusPtr->gender);
    }

    printf("年龄(%d)：", cusPtr->age);
    fgets(info, sizeof(info), stdin);
    if (!(info[0] == '\n'))
    {
      sscanf(info, "%d", &cusPtr->age);
    }

    printf("电话(%s)：", cusPtr->phone);
    fgets(info, sizeof(info), stdin);
    if (!(info[0] == '\n'))
    {
      sscanf(info, "%s", cusPtr->phone);
    }

    printf("邮箱(%s)：", cusPtr->email);
    fgets(info, sizeof(info), stdin);
    if (!(info[0] == '\n'))
    {
      sscanf(info, "%s", cusPtr->email);
    }
    printf("修改完成");
  }
}

void deleteView()
{
  printf("请选择想要删除的客户的编号：");
  int deleteid;
  scanf("%d", &deleteid);
  if (deleteid == -1)
  {
    return;
  }
  int deleteIndeex = getCustomeIndex(deleteid);
  if (deleteIndeex == -1)
  {
    printf("不存在该用户\n");
    return;
  }
  // 如果可以执行到此位置，表明此客户存在
  // 判断是否需要删除
  printf("确认是否删除Y/N");
  char isDelete;
  getchar();
  scanf("%c", &isDelete);
  if (isDelete == 'N')
    return;
  else if (isDelete == 'Y')
  // 确定需要删除
  {
    for (int i = deleteIndeex + 1; i < total; i++)
    {
      customers[i - 1] = customers[i];
    }
    total--;
  }
  else
    printf("你的输入有误\n");
}

void ExitView()
{
  printf("你确定要退出吗Y/N\t");
  char isExit;

  while (1)
  {
    getchar();
    scanf("%c", &isExit);
    if (isExit == 'Y' || isExit == 'N')
      break;
    else
    {
      printf("输出有误，请重新输入Y/N\t");
    }
  }
  if (isExit == 'Y')
  {
    loop = 0;
    printf("欢迎下次光临");
  }
}

void showCostomer()
{
  if (total == 0)
  {
    printf("没有任何客户信息,请先添加\n");
  }
  else
  {
    printf("----------客户列表-------------\n");
    printf("编号\t姓名\t性别\t年龄\t电话\t\t邮箱\n");
    for (int i = 0; i < total; i++)
    {
      printf("%d\t%s\t%c\t%d\t%s\t%s\n", customers[i].id, customers[i].name, customers[i].gender, customers[i].age, customers[i].phone, customers[i].email);
    }
  }
}

void menu()
{

  while (loop)
  {
    printf("-------------客户信息管理软件----------------\n");
    printf("\n              1 添 加 客 户");
    printf("\n              2 修 改 客 户");
    printf("\n              3 删 除 客 户");
    printf("\n              4 客 户 列 表");
    printf("\n              5 退       出");
    printf("\n              请选择(1-5)：");
    int selection; // 记录用户的选择
    scanf("%d", &selection);
    switch (selection)
    {
    case 1:
      printf("添加客户\n");
      addCustomer();

      break;
    case 2:
      printf("修改客户\n");
      modifyView();
      break;
    case 3:
      printf("删除客户\n");
      deleteView();
      break;
    case 4:
      printf("客户列表\n");
      showCostomer();
      break;
    case 5:
      printf("退    出\n");
      ExitView();
      break;
    }
  }
}

int main()
{
  // 模拟数据添加
  customers[0].id = 1;
  strcpy(customers[0].name, "Tom");
  customers[0].gender = 'f';
  customers[0].age = 20;
  strcpy(customers[0].phone, "11232132432");
  strcpy(customers[0].email, "zhangsan@gmail.com");
  total++;
  id_max++;

  menu();
  printf("按任意键退出");
  getchar();
  getchar();
  return 0;
}