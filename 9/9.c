/*Request output of chess board*/
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
  for (int i =0; i<8;i++){
    for (int j =0;j<8 ;j++){
      if ((i+j)%2 !=0)
      printf("%c%c%c%c",0xa8,0x80,0xa8,0x80);
      else printf("  ");
    }
    printf("\n");
  }

    return 0;
}