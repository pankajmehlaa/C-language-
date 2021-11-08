#include <stdio.h>
float pi = 3.14;
int
main ()
{
  float r, A;

  printf ("Enter radius in m ");
  scanf ("%f", &r);
  A = pi * r * r;
  printf ("The area of circle having radius %f is %f meter square", r, A);

}
