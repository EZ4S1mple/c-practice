/*Find the value of s=a+aa+aaa+aaaa+aa...a,
where a is a number. For example, 2+22+222+2222+22222
(a total of 5 numbers are added at this time),
and the addition of several numbers is controlled by the keyboard.*/
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
  int n, d;
  int s = 0;
  int m = 0; // s=Σ(n*10^(d-1));
  scanf("%d %d", &n, &d);

  for (int i = 1; i <= d; i++)
  {
    m = m * 10 + n;
    s += m;
    printf("%d ", m);
    if (i < d)
      printf("+ ");
  }
  printf("= %d", s);

  return 0;
}