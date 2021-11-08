#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers ");
    scanf("%d %d %d",&a,&b,&c);
    
    int l = a<b?(a<c?a:c):(b<c?b:c);
    printf("  %d is smallest number among %d, %d and %d",l,a,b,c);

}

