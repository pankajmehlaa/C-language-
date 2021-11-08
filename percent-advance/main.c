
#include <stdio.h>

int main()
{
    int i,n,marks[30],total_marks,marks_obtained=0, percentage_obtained;
    printf("Enter no. of subject : ");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        printf("Enter number in subject %d : ",i);
        scanf("%d",&marks[i]);
    }
        {
        for (i=1;i<=n;i++)
        marks_obtained += marks[i];
            total_marks = n * 100 ;
        percentage_obtained = (marks_obtained*100)/total_marks;
        printf("Percentage is %d ", percentage_obtained);
    }
       
    return 0;
}



