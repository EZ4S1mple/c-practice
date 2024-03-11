/*An integer, after adding 100,
it becomes a perfect square number,
and when added to 168, it becomes a perfect square number.
What is this number?*/

// x+100=n^2; x+100+168=m^2;
// m^2-n^2=168;
//(m+n)(m-n)=168; i=m+n; j=m-n
// ij=168;
// m=(i+j)/2; n=(i-j)/2
// both i and j are integer larger than 2
// j>=2; 2<=i<85

#include <stdio.h>

int main(
    int argc,
    char argv[])

{
  for (int i = 2; i < 85; i++)
  {
    if (168 % i == 0)
    {
      int j = 168 / i;
      if ((i + j) % 2 == 0 && (i - j) % 2 == 0 && i > j)
      {
        int n = (i - j) / 2;
        int m = (i + j) / 2;
        int x = n * n - 100;
        printf("%d\n", x);
      }
    }
  }

  return 0;
}