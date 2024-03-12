/*Enter a certain year,
a certain month and a certain day,
and determine what day of the year this day is?*/

#include <stdio.h>

int main(
    int argc,
    char argv[])

{

  int year, month, day;
  printf("please enter year month and day\n");
  scanf("%d %d %d", &year, &month, &day);

  int count = year + month + day;
  switch (month)
  {
  case 1:
    count = 0;
    break;
  case 2:
    count = 31;
    break;
  case 3:
    count = 59;
    break;
  case 4:
    count = 90;
    break;
  case 5:
    count = 120;
    break;
  case 6:
    count = 151;
    break;
  case 7:
    count = 181;
    break;
  case 8:
    count = 212;
    break;
  case 9:
    count = 243;
    break;
  case 10:
    count = 273;
    break;
  case 11:
    count = 304;
    break;
  case 12:
    count = 334;
    break;
  case 13:
    count = 365;
    break;
  }

  if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
  {
    if (month > 2)
      count = count + 1;
  }

  printf("The date is %d", count + day);

  return 0;
}