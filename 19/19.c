/*A number is called a "perfect number" if it is
 exactly equal to the sum of its factors.
 For example, 6=1+2+3. Program to find all perfect numbers within 1000.*/
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
  int a[200];
  int sum, n;
  for (int i = 2; i < 1000; i++)
  {
    sum = a[0] = 1;
    n = 0;
    for (int j = 2; j < i; j++)
    {
      if (i % j == 0)
      {
        sum += j;
        a[++n] = j;
      }
    }
    if (i == sum)
    {
      printf("%d = %d", i, a[0]);
      for (int k = 1; k <= n; k++)
      {
        printf(" + %d", a[k]);
      }
      printf("\n");
    }
  }
  return 0;
}