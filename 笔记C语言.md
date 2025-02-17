# 翁恺C语言

## sizeof用法

用法：
1. sizeof(待测试的变量/类型)
2. sizeof 待测试的变量/类型
其他：sizeof(a++),只会计算a的空间大小，后面的a++不会运行

注意：sizeof(字符串) = strlen(字符串)+1，因为strlen不计算最后的'\0'


## 原码，反码，补码

计算机底部存储数字时，存储其二进制补码
补码：表示负数，例如总共8位，则-9的补码可表示为2^8-9,方便计算加减法


## 越界与无符号

整数类型可以理解为时一个循环，最大数+1=最小数
无符号数与有符号数之间，注意将最高位的数字表示的含义替换即可，如short的-1，用其补码表示，2^16-1,16位1，表示unsigned short的最大值，即65535；unsigned short的32768表示为1000 0000 0000 0000,在short中是-32768；也可以理解为整数一致，负数short->unsigned short用2^16+该负数

越界也可直接使用除2取余法，得到的结果截取，若为signed，则其截取得到的最高位为符号位

## 格式化输入输出

输入输出一致
%d整数，%4.2f,总位数有4位，小数位有两位
%f浮点数，%lf双精度浮点数double，%Lf---long double
%zu sizeof返回值（=%d ---int）
%p 地址，等于0x%x,
%x表示十六进制，%#x带0x前缀
%e科学计数法


注意，只有一处需要区分大小写，%lf双精度浮点数double，%Lf---long double
（s)scanf输入%s时，可能将后面所有都当作字符串，除非指定长度


## 动态内存分配

int * a = NULL;//先给NULL值，即使申请空间失败，也不会报错，
a = (int*)malloc(位数*sizeof(int));最前面的（int*）代表强制类型转换，语句为申请位数个整数地址
使用完毕后记得释放，`free(a)`,free(NULL)是允许的

注意：地址为0的地址不应该被允许读写


## const与指针

```c
int *p,*q;//定义两个指针，*无论靠近哪个，都代表*p 的类型为int
const int* p1;int const *p2;//const在*前，不可修改其地址
int* const p3;//const在*后，不可通过指针修改地址的指向值


```
注意：注意定义时为指针赋值，且不要赋值为地址0（不应该可读写）



## C语言中的字符串
```c
char* a="hello";
char* b="hello";
```
//写入在一个比较小的地址的地方，不可修改
//a，b字面量相同，地址相同

char[] c="hello";
//与其他变量 

注意：sizeof(字符串) = strlen(字符串)+1，因为strlen不计算最后的'\0'

strcmp,比较时，若s1较短，那么最后比较'\0'-s2的下一个字符，'\0'值为0

(s)scanf输入%s时，可能将后面所有都当作字符串，除非指定长度




## 函数

实参，形参必须全部匹配，数量必须匹配，类型会尝试自动转换




下面两个概念不要从实际表达的意义去区分，容易混淆
先讲的指针数组，没有（），后讲的数组指针，有（）
int *p[6];指针数组
int (*p)[6];数组指针,指针，指向int[6]



可以在末尾加 \ ,实现字符串换行








# 尚硅谷C语言

返回类型 fun1(){//没有return}//返回一个不确定值

sizeof 类型，该用法会报错

//fgets会吞掉空格，回车，并保存空格，回车
// 可能只有回车，也可能是其他内容+回车
// 不能用scanf,必须使用fgets,有时可能只有回车，有时是其他内容+回车，scanf无法处理，
// 这时可先使用fgets读入一个较长字符串，判断是否只有回车（即第一个字符即为回车），若不是，再使用sscanf从该字符串读出
// scanf，或sscanf记得非字符串均要使用&
char info[30];



char c1,c2,c3;scanf("%c %c %d");//c3在输入时按照int处理
//按照定义先后顺序输出变量地址，整体是地址从大到小，单个变量内部是从小到大

  // 若age定义为char,只给了1个字节，而实际输入是按照int,int为4个字节，输入时数据记入第4个字节，前面的置为0，是的前面的变量值变为0
  // 而如果每次输入完毕后豆及时的读取了值，并复制到其他地方，后面输入时即便覆盖了也没有关系

排序的稳定性：相同的元素排序完毕后是否可能交换顺序





int nm=10;
printf("%d %d\n",num++,num++);
以上，在printf中使用++等改变变量的操作，其执行顺序不确定（仅在C中如此）
文件后缀改为cpp，却写c语言代码，还是按照C语言执行

c语言不允许：参数默认值，重载