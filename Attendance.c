#include <stdio.h>

int main() {

    int attendance[10] = {1, 1, 0, 1, 0, 1, 1, 0, 1, 1};

    int total    = 10;
    int present  = 0;
    int absent   = 0;
    float percentage;

    for (int i = 0; i < total; i++) {
        if (attendance[i] == 1)
            present++;
        else
            absent++;
    }

    percentage = (present / (float)total) * 100;

    printf("===== Class Attendance Report =====\n");
    printf("Total Students  : %d\n", total);
    printf("Total Present   : %d\n", present);
    printf("Total Absent    : %d\n", absent);
    printf("Attendance %%    : %.2f%%\n", percentage);

    return 0;
}
