#include <stdio.h>
#include <conio.h>
int main()
{
 int option;

    printf("\n Welcome to Maths \n Choose a option i.e. 1 for Calculator \n\n1.Calculator\n\n2.Area of Circle\n\n3.Check odd or Even\n\n4.Check Divisibility\n");
    scanf("%d",&option);
    
    if (option = 1)
    {
       int a,b,option,result;
    
    printf("Choose a option i.e. 1 for Addition 1. Addition 2. Subtraction 3. Multiply 4. Divison \n ");
    scanf("%d",&option);
    printf("Enter two numbers  ");
    scanf("%d%d",&a,&b);
    
    result = option==1?(a+b):(option==2?a-b:(option==3?a*b:(option==4?a/b:0)));
    printf("%d",result);

    }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
}