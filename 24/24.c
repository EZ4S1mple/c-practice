/*There is a sequence of fractions: 2/1, 3/2, 5/3, 8/5, 13/8, 21/13...
Find the sum of the first 20 terms of this sequence.*/
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
  float a = 2, b = 1;
  double sum = 0, c;
  for (int i = 0; i < 20; i++)
  {

    sum = sum + a / b;
    c = a + b;
    b = a;
    a = c;
  }
  printf("%f", sum);
  return 0;
}