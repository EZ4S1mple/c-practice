/*Two table tennis teams compete, each with three players.
Team A consists of three people a, b, and c,
and team B consists of three people x, y, and z.
Lots have been drawn to determine the match list.
Someone asked the players about the roster for the game.
a said that he does not compete with x, and c said that
he does not compete with x and z. Please program a program to
find the list of players from the three teams.*/
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
  char a, b, c, i, j, k;
  a = 'a';
  b = 'b';
  c = 'c';
  for (i = 'x'; i <= 'z'; i++)
  {
    for (j = 'x'; j <= 'z'; j++)
    {
      for (k = 'x'; j <= 'z'; j++)
      {
        if (a != i - 23 && c != j - 23 && c != j - 25 && i != j && i != k && j != k)
          printf("a--%c, b--%c, c--%c\n", i, k, j);
      }
    }
  }

  return 0;
}