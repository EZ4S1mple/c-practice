/*A ball falls freely from a height of 100 meters.
Each time it hits the ground, it bounces back to
half of its original height. If it falls again,
how many meters does it pass by when it hits the ground for the 10th time?
How high is the 10th rally?*/
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
  int t;
  double h = 100;
  double d, m, s;
  scanf("%d", &t);
  for (int i = 1; i <= t; i++)
  {
    m = m + h;
    h = h * 0.5;
    m = m + h;
  }
  m = m - h;
  ;
  printf("%f,%f", m, h);
  return 0;
}