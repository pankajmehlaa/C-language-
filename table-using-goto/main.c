
#include <stdio.h>

int
main ()
{
  int i = 1, num;
  printf ("Enter a number ");
  scanf ("%d", &num);
table:
  printf ("%d * %d = %d \n", num, i, num * i);
  i++;
  if (i <= 10)
    goto table;

  return 0;
}
