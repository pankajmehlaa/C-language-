
#include <stdio.h>

int main()
{
int i;
  printf("Enter a number");
  scanf("%d",&i);
  switch (i%2)
  {
      case 0:
      printf("Number is Even");
      break;
      case 1:
      printf("Number is Odd");
      break;
      
  }
  
    return 0;
}
