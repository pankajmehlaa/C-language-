
#include <stdio.h>

int main()
{
    int marks_in_hindi,marks_in_english,marks_in_maths,marks_in_physics,marks_in_chemistry,total;
    float percentage;
    printf("Enter Marks in English ");
    scanf("%d",&marks_in_english);

    printf("Enter Marks in Hindi ");
    scanf("%d",&marks_in_hindi);
    
    printf("Enter Marks in Maths ");
    scanf("%d",&marks_in_maths);
    
    printf("Enter Marks in Physics ");
    scanf("%d",&marks_in_physics);
    
    printf("Enter Marks in Chemistry ");
    scanf("%d",&marks_in_chemistry);
    total = marks_in_english + marks_in_hindi + marks_in_maths + marks_in_chemistry + marks_in_physics;
    percentage = (total*100)/500;
   
    if (percentage > 33 && percentage <50)
    {
    printf(" You got %.2f percent  \n and your division is 3rd",percentage);
    }
   else if (percentage > 50 && percentage < 75)
    {
    printf("You got %.2f percent \n and your division is 2nd",percentage);
    }
    else if (percentage > 75 && percentage < 100)
    {
    printf("You got %.2f percent \n and your division is first",percentage);
    }
     else if (percentage < 33 && percentage > 0)
    {
    printf(" You got %.2f percent \n and You failed",percentage);
    }
    return 0;
}


