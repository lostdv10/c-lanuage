#include <stdio.h>
// //fgets会吞掉空格，回车，并保存空格，回车
// int main(){
// printf("你好：");
// int num=10;
// char shuzu0[30];
// fgets(shuzu0,30,stdin);
// printf("%s",shuzu0);
// // char *shuzu2=gets(shuzu0);
// // printf("%s777",shuzu2);
// printf("%d %d\n",num++,num++);
// printf("你好");

// char c1='x';
// char shuzu1[10]="hello!";
// char c2='y';
// char c3='z';
// printf("%p,%p,%p,%p,%p",&c1,&shuzu1[0],&shuzu1[1],&c2,&c3);

// //按照定义先后顺序输出变量地址，整体是地址从大到小，单个变量内部是从小到大


// int getBits(int num)
// {
//     int i    = 0;
//     int bits = 1;
//     for (int i = 1;num<=0; i++)
//     {
//         if ((num /= 10) == 0)
//         {
//             bits = i;
//             // break;
//         }
//     }
//     return bits;
// }
// getchar();
// 
//   return 0;
// }

int TransilateNum(int *array){
    
    for(int i=0;i<10;i++)
    array[i]=i;

}





int main(){
    int array[20]={0};
    int i =0;
    TransilateNum(array);
    for(i<=0;i<20;i++){
        printf("%d\t",array[i]);
    }







    getchar();
}