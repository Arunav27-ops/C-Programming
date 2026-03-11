#include<stdio.h>

int main()
{
    int marks, grade;

    printf("Enter student marks: ");
    scanf("%d",&marks);

    grade = marks / 10;

    switch(grade)
    {
        case 10:
        case 9:
        case 8:
            printf("Grade: A");
            break;

        case 7:
            printf("Grade: B");
            break;

        case 6:
            printf("Grade: C");
            break;

        default:
            printf("Result: Fail");
    }

    return 0;
}