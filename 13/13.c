/*Print out all the "narcissus numbers".
The so-called "narcissus number" refers to a three-digit number
whose cube sum is equal to the number itself.
For example: 153 is a "narcissus number"
because 153=1 cubed + 5 cubed + 3 cubed.*/
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
  int i, j, x, y, z;
  for (i = 100; i < 1000; i++)
  {
    x = i / 100;
    y = (i - x * 100) / 10;
    z = i % 10;
    if (x * x * x + y * y * y + z * z * z == i)
      printf("%d\n", i);
  }
  return 0;
}