/*Print the stairs and also print two smiley faces above the stairs.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stddef.h>

int main(
    int argc,
    char *argv[])
{
  printf("^^ ^^\n");
  for (int a = 1; a < 13; a++)
  {
    for (int b = 1; b <= a; b++)
    {
      printf("%c%c", 0xa8, 0x80);
    }
    printf("\n");
  }
  return 0;
}