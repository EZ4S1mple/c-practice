/*Factor a positive integer into its prime factors.
For example: input 90, print out 90=2*3*3*5*/
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
  int a, i;

  scanf("%d", &a);
  printf("%d=", a);
  for (i = 2; i <= a; i++)
  {
    while (a % i == 0)
    {
      a = a / i;
      printf("%d ", i);

      if (a != 1)
        printf("* ");
    }
  }

  return 0;
}