#include <stdio.h>

#define BOOL int
#define TRUE  1
#define FALSE 0

int main(){
  BOOL isPass  = TRUE;
  BOOL isFail = FALSE;

  printf("isPass = %d,isFail = %d\n",isPass,isFail);
  if(isPass){
    printf("PASS");
  }
  else{
    printf("FALSE");
  }



  return 0;
}