
#include <stdio.h>

int main()
{
  int a,b,c;
  printf("Enter three Numbers ");
  scanf("%d %d %d",&a,&b,&c);
  if (a>b)
  {
      if (a>c)
      printf("%d is a largest number",a);
  }
  else
  {
     if (b>c)
     {
         printf("%d is largest number",b);
     }
     else 
     {
         printf("%d is largest number",c);
     }
  }

    return 0;
}
