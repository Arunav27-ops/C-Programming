#include <stdio.h>
int main(){
    int hours;
    printf("Enter working hours per week:");
    scanf("%d", &hours);
    switch (hours/10){
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
        printf ("Rating: Excellent\n");
        break;
        case 4:
        printf ("Rating : Good\n");
        break;
        case 3:
        printf (" Rating : Average\n");
        break;
        default:
        printf(" Rating : Poor\n");
        break;
    }
}