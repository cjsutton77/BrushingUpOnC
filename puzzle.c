#include <stdio.h>
#include <stdlib.h>

/* Puzzle A01 -- print the integers from 0 to 14, one per line */
int main(int argc, char *argv[])
{
  int j;
  for (j = 0 ; j < 15 ; j++)
  {
    printf("%3d\n", j);
  }
  system("pause");	
  return 0;
}
