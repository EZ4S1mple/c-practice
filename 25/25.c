//Find the sum of 1+2!+3!+...+20!
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
double sum=0,i,j=1;
for (i=1;i<=20;i++){
  j=j*i;
  sum=j+sum;
}
printf("%lf",sum);
    return 0;
}