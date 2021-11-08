#include<math.h>
#include <stdio.h>

void main()
{
    double a,b,c,D,r1,r2,realpart,imgpart;
    printf("Enter Cofficient a,b,c \n");
    scanf("%lf %lf %lf",&a,&b,&c);
    D = b*b-4*a*c;
    if (D>0)
    {
        r1= (-b+sqrt(D))/(2*a);
        r2= (-b-sqrt(D))/(2*a);
        printf("Roots are real so Root 1 = %lf \n Root 2 = %lf",r1,r2);
    }
    else if (D==0)
    {
        r1=r2=-b/(2*a);
        printf(" Roots are real and equal so Root1 = Root2 = %lf ",r1);
    }
    else
    {
        realpart=-b/(2*a);
        imgpart=sqrt(-D)/(2*a);
        printf("Roots are imaginery so Root 1 = %lf+%lfi and Root 2 = %lf-%lfi",realpart,imgpart,realpart,imgpart);
    }
    
}


