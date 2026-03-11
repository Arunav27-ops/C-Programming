#include<stdio.h>

int main()
{
    int marks;

    printf("Enter student marks: ");
    scanf("%d",&marks);

    if(marks >= 80)
    {
        printf("Grade: A");
    }
    else if(marks >= 70)
    {
        printf("Grade: B");
    }
    else if(marks >= 60)
    {
        printf("Grade: C");
    }
    else
    {
        printf("Result: Fail");
    }

    return 0;
}