#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x;
  
  printf("input number : ");
  scanf("%i",&x);
  
  if(x > 0)
       { printf("absolute value is %i.\n", x); }
  else if(x == 0)
       { printf("absolute value is %i.\n", x); }
  else if(x < 0)
       { printf("absolute value is %i.\n", -x); }
  
  system("PAUSE");	
  return 0;
}
