
#include <stdio.h>

int main()
{
    int P ,T, R , SI ;  
   
       
   printf("Enter Principal Value ");
   scanf("%d",&P);
   printf("Enter Interest Rate ");
   scanf("%d",&R);
   printf("Enter time in years ");
   scanf("%d",&T);
   SI  = (P*R*T)/100; 
  
    
   printf("Total Interest after %d year at the rate of %d percent will be %d RS. \n",T,R,SI);
   printf("So total amount will be %d",SI+P);
    return 0;
}

