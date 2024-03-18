/*Input two positive integers m and n and
find their greatest common divisor and least common multiple.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stddef.h>

int max(int a, int b)
{
  return (a > b) ? a : b;
}

int min(int a, int b)
{
  return (a < b) ? a : b;
}
int main(
    int argc,
    char *argv[])
{
  int a, b;
  scanf("%d %d", &a, &b);

  for (int i = min(a, b); i > 0; i--)
  {
    if (a % i == 0 && b % i == 0)
    {
      printf("common divisor is %d\n", i);
      break;
    }
  }

  for (int j = max(a, b);; j++)
  {
    if (j % a == 0 && j % b == 0)
    {
      printf("least common multiple is %d\n", j);
      break;
    }
  }
  return 0;
}