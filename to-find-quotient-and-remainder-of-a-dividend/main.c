
#include <stdio.h>

int main()
{
    int Dividend,Divisor,Qutioent,Remainder;
    printf("Enter Dividend = ");
    scanf("%d",&Dividend);
    printf("Enter Divisor = ");
    scanf("%d",&Divisor);
    
    Qutioent = Dividend/Divisor;
    Remainder = Dividend%Divisor;
    printf("The Qutioent is = %d and remainder is %d ",Qutioent,Remainder);

    return 0;
}
