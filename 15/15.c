/*Use the nesting of conditional operators to complete this question:
students with academic scores >= 90 points are represented by A,
students with scores between 60-89 are represented by B,
and students with scores below 60 are represented by C*/
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
  int s;
  char g;
  scanf("%d", &s);
  g = (s >= 90) ? 'A' : ((s >= 60) ? 'B' : 'C');
  printf("%c\n", g);
  return 0;
}