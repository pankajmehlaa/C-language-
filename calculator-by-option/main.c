
#include <stdio.h>

int main()
{
    int option,a,b;
    printf("Choose your option i.e. 1 for Addition \n 1. Addition  2. Subtraction  3. Multiplication  4. Division\n");
    scanf("%d",&option);
    printf("Enter a value ");
    scanf("%d",&a);
    printf("Enter 2nd value ");
    scanf("%d",&b);
    
   if (option ==  1) {
        printf("The Addition is  %d+%d=%d ",a,b, a+b);
    }
    else if (option ==  2) {
        printf("The Subtraction is  %d-%d=%d",a,b,a-b);
    }
   else if (option ==  3) {
        printf("The Multiply is  %d*%d=%d",a,b,a*b);
    }
   else if (option ==  4) {
        printf("The Division is  %d/%d=%d",a,b,a/b);
    }
else {
    printf("Please Choose a valid option");
}

    return 0;
}



