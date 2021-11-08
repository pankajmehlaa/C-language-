
#include <stdio.h>

int main()
{
    int elements,number,i;
    printf("Enter elements = ");
    scanf("%d",&elements);
    printf("Enter a number ");
    scanf("%d",&number);
    printf("The table of %d is -\n",number);
    for (i=1;i<=elements;i++)
    {
        
        printf(" %d * %d = %d\n",number,i,number*i);
    }
    

    return 0;
}
