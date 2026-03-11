#include<stdio.h>
int main(){
    int unit;
    float bill;
    printf("Enter Total Units:");
    scanf("%d", & unit);
    if(unit<=100)
    bill=unit*5;

    else bill=unit*8;
    printf("Electricity Bill=%.2f", bill);
    return 0;
}