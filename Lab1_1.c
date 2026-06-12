/*Write a program that takes two inputs from users adds them and prints the output.
 The input numbers can be fractions. 
 The output should be displayed. 
Everything should be done in the main function*/

/* Name your program Lab1_1. If you are using an installed application*/

#include <stdio.h>

int main ()
{
    float num1, num2, sum;

    printf("Enter the two numbers to be added:");
    scanf("%f %f", &num1, &num2);
    sum = num1 + num2;
    printf(" The sum of %f and %f is %f", num1, num2, sum);

    return 0;
}