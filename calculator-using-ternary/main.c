#include <stdio.h>

int main()
{
    int a,b,option,result;
    
    printf("Choose a option i.e. 1 for Addition 1. Addition 2. Subtraction 3. Multiply 4. Divison \n ");
    scanf("%d",&option);
    printf("Enter two numbers  ");
    scanf("%d%d",&a,&b);
    
    result = option==1?(a+b):(option==2?a-b:(option==3?a*b:(option==4?a/b:0)));
    printf("%d",result);

}


