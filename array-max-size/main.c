#include <stdio.h>
# define MAX_SIZE 100
# define MIN_SIZE 100

int main()
{  
    char option;
    printf("Max or Min ?");
    scanf("%c",&option);
    
    if (option = 1) 
{ 
    
    int arr[MAX_SIZE];
    int i,max,size;
    printf("Enter size of array ");
    scanf("%d",&size);
    
     printf("Enter elements in array ");
    
    for (i=0; i<size; i++)
    {
    scanf("%d",&arr[i]);
   if(arr[i] > max)
       {
         max = arr[i];
          
       } 
}

     printf("%d",max);

}

else {
    int arr[MIN_SIZE];
    int i,min,size;
    printf("Enter size of array ");
    scanf("%d",&size);
    
     printf("Enter elements in array ");
    
    for (i=0; i<size; i++)
    {
    scanf("%d",&arr[i]);
   if(arr[i] < min)
       {
         min = arr[i];
          
       } 
}

     printf("%d",min);
     
}
}
    
    
