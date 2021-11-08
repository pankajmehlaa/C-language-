
#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age ");
    scanf("%d",&age);
    
    if (age>=18)
    {
        printf("Yeah, You are eligible to Vote");
    }
    else
    {
        printf("Sorry, You are not eligible to Vote");
    }

    return 0;
}
