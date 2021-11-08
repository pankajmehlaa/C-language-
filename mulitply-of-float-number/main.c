
#include <stdio.h>

int main()
{
    float n1,n2,result;
    printf("Enter a number = ");
    scanf("%f",&n1);
    printf("Enter other number = ");
    scanf("%f",&n2);
    
    result = n1*n2;
    printf("  %.2f",result);

    return 0;
}
