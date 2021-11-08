#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter a Number ");
    scanf("%d",&a);
    printf("Check divisble by ");
    scanf("%d",&b);
    if (a % b == 0)
    {
        printf("%d is divisbleby %d",a,b);
    }
    else
    {
        printf("%d is not divisble by %d",a,b);
    }
    
}
