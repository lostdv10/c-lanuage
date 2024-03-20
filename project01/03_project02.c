#include <stdio.h>
#include <string.h>

// 定义结构体数据类型
struct Customer
{
    int id;         // 编号
    int age;        // 年龄
    char name[10];  // 名字
    char gender;    // 'f' 女  'm' 男
    char phone[16]; // 电话号码
    char email[20]; // 邮箱
};

int loop = 1;        // 控制是否退出主菜单
int key = 0;         // 功能选项
int customerNum = 0; // 表示当前有多少个客户
char choice = ' ';   // 表示用户选择的是Y/N
// 客户结构体数组
struct Customer customers[100]; // 最多有100个客户, 超过100个，可以扩展

// 显示一个Customer 变量的信息
// 这里我们接收的是结构体指针，提高效率
void getCustomerInfo(struct Customer *customer)
{
    printf("\n%d\t%s\t%c\t%d\t%s\t%s", (*customer).id, (*customer).name, (*customer).gender, (*customer).age, (*customer).phone, (*customer).email);
}

// 添加客户
void add()
{
    customers[customerNum].id = customerNum + 1; // 编号按照自增规则
    printf("\n---------------------添加客户---------------------");

    printf("\n姓名：");
    scanf("%s", customers[customerNum].name);
    getchar(); // 过滤回车

    printf("\n性别（f或m）：");
    scanf("%c", &(customers[customerNum].gender));
    getchar(); // 过滤回车

    printf("\n年龄：");
    scanf("%d", &(customers[customerNum].age));
    getchar(); // 过滤回车

    printf("\n电话：");
    scanf("%s", customers[customerNum].phone);
    getchar(); // 过滤回车

    printf("\n邮箱：");
    scanf("%s", customers[customerNum].email);
    getchar(); // 过滤回车

    printf("\n---------------------添加完成---------------------");
    customerNum++; // 自增，必须
}

// 根据输入的id, 返回index ,如果没有，就返回-1
int findIndex(int id)
{
    int index = -1;
    for (int i = 0; i < customerNum; i++)
    {
        if (customers[i].id == id)
        { // 找到
            index = i;
        }
    }
    return index;
}

// 说明
// 1. 返回int ,如果 1 就说明删除成功
// 2. 返回0, 表示删除失败
// 3. 接收的是要删除的客户id
int del(int id)
{
    int index = findIndex(id);
    int i;
    if (index == -1)
    {             // 说明不存在id 这个客户
        return 0; // 表示删除失败
    }
    else
    {
        // 说明存在，就要删除, 删除的本质就是将编号为id 的这个客户移除
        // 1. customers数组从index +1 位置 开始，整体前移
        for (i = index + 1; i < customerNum; i++)
        {
            customers[i - 1] = customers[i];
            // 更新ID
            customers[i - 1].id = i;
        }
        // 2. customerNum - 1
        customerNum--;
        return 1;
    }
}

// 显示删除客户的界面，然后调用
void delView()
{
    int id = 0;
    char choice = ' ';
    printf("\n---------------------删除客户---------------------");
    printf("\n请选择待删除客户编号(-1退出)：");
    scanf("%d", &id);
    getchar(); // 过滤回车
    if (id == -1)
    {
        printf("\n----------------你放弃删除了----------------");
        return;
    }

    printf("\n确认是否删除(y/n)：");
    scanf("%c", &choice);

    if (choice == 'y')
    {
        if (!del(id))
        {
            printf("\n-------------删除失败，id不存在-------------");
        }
        else
        {
            printf("\n--------------删除成功!!----------- -----");
        }
    }
}

// 说明
// 1. 返回int ,如果 1 就说明修改成功
// 2. 返回0, 表示修改失败
// 3. 接收的是要修改的客户id
int edit(int id)
{
    int index = findIndex(id);
    if (index == -1)
    {             // 说明不存在id 这个客户
        return 0; // 表示xiugai失败
    }
    else
    {
        // 说明存在，就要修改,
        printf("\n---------------修改客户-----------------");

        // 定义字符串存储输入缓冲区
        char input[20];

        // 读取姓名
        printf("\n姓名(%s):", customers[index].name);
        fgets(input, sizeof(input), stdin);
        
        if (input[0] != '\n')
        {
            sscanf(input, "%s", customers[index].name);
        }

        // 读取性别
        printf("\n性别(%c):", customers[index].gender);
        fgets(input, sizeof(input), stdin);
        if (input[0] != '\n')
        {
            sscanf(input, "%c", &customers[index].gender);
        }

        // 读取年龄
        printf("\n年龄(%d):", customers[index].age);
        fgets(input, sizeof(input), stdin);
        if (input[0] != '\n')
        {
            sscanf(input, "%d", &customers[index].age);
        }

        // 读取电话
        printf("\n电话(%s):", customers[index].phone);
        fgets(input, sizeof(input), stdin);
        if (input[0] != '\n')
        {
            sscanf(input, "%s", customers[index].phone);
        }

        // 读取邮箱
        printf("\n邮箱(%s):", customers[index].email);
        fgets(input, sizeof(input), stdin);
        if (input[0] != '\n')
        {
            sscanf(input, "%s", customers[index].email);
        }

        printf("\n---------------修改完成---------------");
        return 1;
    }
}

// 显示修改界面
// 显示删除客户的界面，然后调用
void editView()
{
    int id = 0;
    printf("\n-----------------修改客户-----------------");
    printf("\n请选择待修改客户编号(-1退出)：");
    scanf("%d", &id);
    getchar();
    if (id == -1)
    {
        printf("\n--------------你放弃修改了--------------");
        return;
    }
    // 执行删除
    if (!edit(id))
    {
        printf("\n------------修改失败,id不存在------------");
    }
    else
    {
        printf("\n--------------修改成功!!--------------");
    }
}

// 显示客户信息列表
void listCustomers()
{

    if (customerNum < 1)
    {
        printf("\n还有没有客户信息，快去添加吧！");
    }
    else
    {
        printf("-------------------客户列表-------------------");
        printf("\n编号\t姓名\t性别\t年龄\t电话\t\t邮箱");

        for (int i = 0; i < customerNum; i++)
        {
            // 表示客户的编号
            getCustomerInfo(&customers[i]);
        }
    }
}

// 显示主菜单
void mainMenu()
{
    do
    {

        printf("\n\n\n--------------客户信息管理软件--------------");
        printf("\n              1 添 加 客 户");
        printf("\n              2 修 改 客 户");
        printf("\n              3 删 除 客 户");
        printf("\n              4 客 户 列 表");
        printf("\n              5 退       出");
        printf("\n              请选择(1-5)：");
        scanf("%d", &key);
        getchar(); // 过滤回车

        switch (key)
        {
        case 1:
            add();
            break;
        case 2:
            editView();
            break;
        case 3:
            delView();
            break;
        case 4:
            listCustomers();
            break;
        case 5:
            do
            {
                printf("\n确认是否退出(y/n)：");
                scanf("%c", &choice);
                getchar();                            // 过滤缓冲区回车
            } while (choice != 'y' && choice != 'n'); // 如果输入的不是'y' , 并且不是'n'

            // 如果输入的是y 则退出
            if (choice == 'y')
            {
                loop = 0;
            }
            break;
        default:
            printf("\n 你输入有误， 请重新输入...");
            break;
        }
    } while (loop);

    printf("\n 你退出了客户管理系统");
}

int main()
{
    // 为了测试显示客户信息,我们可以先初始化一个客户, 后面我们是通过界面来添加
    // customers[0].id = 1;
    // customers[0].age = 10;
    // strcpy(customers[0].email, "yy@atguigu.com");
    // customers[0].gender = 'f';
    // strcpy(customers[0].name, "zs");
    // strcpy(customers[0].phone, "13111008888");

    mainMenu(); // 调用函数，显示菜单

    return 0;
}
