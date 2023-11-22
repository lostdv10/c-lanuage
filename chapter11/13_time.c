#include <stdio.h>
#include <time.h>
long long sum(int n)
{
  long long sum1=0;
  for(int i = 1;i<=n;i++)
  sum1+=i;
  return sum1;
}
int main(){
  time_t curtime;
  time(&curtime);
  printf("当前时间戳：%lld\n",curtime);
  time_t curtime2 = time(NULL);
  printf("当前时间戳：%s\n",ctime(&curtime));

time_t start,end,diff;
time(&start);
long long d=sum(100000000000LL);
time(&end);
diff=difftime(end,start);
printf("%d,%d",diff,d);

  return 0;
}