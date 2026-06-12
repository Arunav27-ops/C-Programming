/* Write a program that takes a number from a user. If the number is negative, 
display " Netherlands". If the number is non-negative, then display " Portugal"*/
// name your program lab1_4.c if you are using an installed application.//

#include <stdio.h>
 int main ()
{
    // declare a variable to store the user input. in this case i use an int variable name num
    int num;
    printf( "Enter a number:" );
    // now give a inpute from the user
    scanf ("%d", &num);
    // now  i am going to use an if and else statement to check if the number is negative or non-negative
    if (num < 0){
        printf("Netherlands");
    }
    else { 
        printf("Portugal");
        
    }
    return 0;
}
