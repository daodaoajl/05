#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x;
  
  printf("정수를 입력하시오 : ");
  scanf("%i",&x);
  
  if(x > 0)
       { printf("양수입니다.\n"); }
  else if(x == 0)
       { printf("0 입니다.\n"); }
  else if(x < 0)
       { printf("음수입니다.\n"); }
  
  system("PAUSE");	
  return 0;
}
