#include <stdio.h>

int main()

{
    int n,a;
    printf("Enter a Number to get table ");
    scanf("%d",&a);
    for(n=a; n<=100; n=n+a) {
        printf("%d ",n); 
    }

    
}

