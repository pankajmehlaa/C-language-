#include <stdio.h>

int main()
{
    int i,j;
    int x[2][2];
    int y[2][2];
    int z[2][2];
    
    printf("Elements of 1 matrix = \n");
    for (i=0;i<2;i++)
    for (j=0;j<2;j++)
    {
        printf("Enter [%d][%d]=",i+1,j+1);
        scanf("%d",&x[i][j]);
    }
    
    printf("Elements of 1 matrix = \n");
    for (i=0;i<2;i++)
    for (j=0;j<2;j++)
    {
        printf("Enter [%d][%d]=",i+1,j+1);
        scanf("%d",&y[i][j]);
    }
    
    for (i=0;i<2;i++)
    for (j=0;j<2;j++)
    {
        z[i][j]=x[i][j]+y[i][j];
        
    }
    
printf("\n Sum of Matrix is");

for (i=0;i<2;i++)
{
for (j=0;j<2;j++)
{
printf("%d",z[i][j]);
}
 printf("\n");
}

    return 0;
}
