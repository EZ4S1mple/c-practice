/*Output 9*9 formula*/

#include <stdio.h>
int main(
    int argc,
    char argv[])

{
  for (int i = 1; i < 10; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%d * %d = %-5d", i, j, i * j);
    }
    printf("\n");
  }
  return 0;
}