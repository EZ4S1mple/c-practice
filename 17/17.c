/*Enter a line of characters and count the number of
English letters, spaces, numbers and other characters in it.*/
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
  char a;
  int l = 0, s = 0, n = 0, o = 0;
  while ((a = getchar()) != '\n')
  {
    if ((a <= 'z' && a >= 'a') || (a <= 'Z' && a >= 'A'))
      l++;
    else if (a <= '9' && a >= '0')
      n++;
    else if (a == ' ')
      s++;
    else
      o++;
  }
  printf("l: %d\nn: %d\ns: %d\no: %d\n", l, n, s, o);

  return 0;
}