/*The problem of monkeys eating peaches:
The monkey picked a few peaches on the first day,
ate half of them immediately, and was not satisfied.
He ate one more. The next morning, he ate half of the
remaining peaches and one more. From then on,
I ate half and one of the leftovers from the previous
day every morning. When I wanted to eat again on the
morning of the 10th day, I saw that there was only one peach left.
Find out how many were picked on the first day.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stddef.h>

// x=0.5*y+1
int main(
    int argc,
    char *argv[])
{
  int i, y;
  int x = 1;
  for (int i = 1; i < 10; i++)
  {
    y = (x + 1) * 2;
    x = y;
  }
  printf("%d", y);
  return 0;
}