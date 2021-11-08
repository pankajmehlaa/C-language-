
#include <stdio.h>

int main()
{
    int n1,n2,new,new2;
    printf("Enter two number = ");
    scanf("%d%d",&n1,&n2);
    
    new = n1 ;
    new2 = n2;
    n2 = new ;
    n1 = new2;
    
    printf("New n1 is %d and new n2 is %d",n1 ,n2);
    

    return 0;
}
