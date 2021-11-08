#include<stdio.h>

int main()

{
    int a,b;
    char op;
    printf("Enter operand like + - * /");
    scanf("%c",&op);
    printf("Enter a number");
    scanf("%d",&a);
    printf("Enter 2nd Number");
    scanf("%d",&b);
   

   if (op ==  '+') {
        printf(" %d.\n", a+b);
    }
    else if (op ==  '-') {
        printf(" %d.\n", a-b);
    }
   else if (op ==  '*') {
        printf(" %d.\n", a*b);
    }
   else if (op ==  '/') {
        printf(" %d.\n", a/b);
    }

  

    
}


