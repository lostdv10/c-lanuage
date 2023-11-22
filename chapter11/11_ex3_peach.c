#include <stdio.h>

int peach(int n){
  if(n==10)
  return 1;
  else
  return (peach(n+1)+1)*2;

}

int main(){
  printf("%d",peach(1));
  return 0;
}