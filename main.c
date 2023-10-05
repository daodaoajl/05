#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int answer = 59;
  int x;
  int trial = 0;
  
  do
  {
      printf("Guess a number : ");
      scanf("%d", &x);
      
                  if(x > answer)
                  { printf("low!\n"); }
                  else if( x < answer)
                  { printf("high!\n"); }
      
      trial = trial +1;
  }
  while( x != answer);
  
  
  printf("congratulation! trials : %i\n", trial);

  system("PAUSE");	
  return 0;
}
