/*Classical problem (rabbits giving birth to babies):
There is a pair of rabbits, and they give birth to a pair of
rabbits every month from the third month after birth.
After the rabbits grow to the third month,
they give birth to a pair of rabbits every month.
If the rabbits both If you don't die,
what is the total number of rabbits every month?
(40 months before export is sufficient)*/
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
  int x = 1, y = 0;
  printf("month\tnumber\n");
  for (int a = 1; a < 41; a++)
  {
    int sum = x + y;
    y = x;
    x = sum;
    printf("%d\t%d\n", a, y);
  }
  return 0;
}