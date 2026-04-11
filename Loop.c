#include<stdio.h>

int main() {
    int i, days, fine;

    for(i = 1; i <= 3; i++) {
        printf("Student %d\n", i);

        printf("Enter days late: ");
        scanf("%d", &days);

        if(days <= 5)
            fine = 0;
        else if(days <= 10)
            fine = (days - 5) * 5;
        else
            fine = (5 * 5) + (days - 10) * 10;

        printf("Fine = %d taka\n\n", fine);
    }

    return 0;
}