/*Determine prime numbers between 101 and 200*/
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
  int i, j, k;
  for (i = 101; i < 200; i++)
  {
    k = sqrt(i);
    for (j = 2; j <= k; j++)
    {
      if (i % j == 0)

        break;
    }
    if (j > k)
      printf("%d\n", i);
  }
  return 0;
}