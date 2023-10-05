#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int c;
  int num = 0;
  
  printf("input a string : ");
  
  while ( (c = getchar( )) != '\n')// getchar()는 문자저장 
  {
        if((c >= '0') && (c <= '9'))
             { (num = num + 1); }
  }

  printf("the number of digits is : %i\n", num);

  system("PAUSE");	
  return 0;
}
