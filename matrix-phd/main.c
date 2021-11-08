
#include <stdio.h>

int main()
{
    int x[10][10],
        y[10][10],
    i,j,rows,columns;
    printf("Enter number of rows = ");
    scanf("%d",&rows);
     printf("Enter number of columns = ");
    scanf("%d",&columns);
    
    printf("Please enter Element of Matrix X \n");
    for (i=1;i<=rows;i++)
    {
        for (j=1;j<=columns;j++)
        {
            printf("Enter Element [%d][%d] = ",i,j);
            scanf("%d",&x[i][j]);
            
            
        }
    }
    
     printf("Please enter Element of Matrix Y \n");
    for (i=1;i<=rows;i++)
    {
        for (j=1;j<=columns;j++)
        {
            printf("Enter Element [%d][%d] = ",i,j);
            scanf("%d",&y[i][j]);
            
            
        }
    }
    printf("  The sum of matrix X+Y is \n");
    for (i=1;i<=rows;i++)
    {
        for (j=1;j<=columns;j++)
        {
            printf("    %d\t  %d\t ",x[i][j],y[i][j]);
             
            
        }
        printf("\n ");
    }
    
    
     printf("  The matrix Y is \n");
    for (i=1;i<=rows;i++)
    {
        for (j=1;j<=columns;j++)
        {
            printf("    %d\t",y[i][j]);
             
            
        }
        printf("\n");
    }


    return 0;
}
