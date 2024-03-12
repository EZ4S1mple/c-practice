/*Input three integers x, y, z.
Please output these three numbers from small to large.*/

#include <stdio.h>

int max(int a, int b)
{
  return (a > b) ? a : b;
}

int min(int a, int b)
{
  return (a < b )? a : b;
}
int main(
    int argc,
    char argv[])

{
  int x, y, z;

  scanf("%d %d %d", &x, &y, &z);

  int temp = x + y + z;
  int small = min(x, min(y, z));
  int big = max(x, max(y, z));
  int mid = temp - big - small;

  printf("%d < %d < %d\n", small, mid, big);
  return 0;
}