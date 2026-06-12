/* Write a program that runs in a loop till the user enters a 7.
If the user enters any others number the program keeps on running. */
// Name your program Lab1_3. If you are using an installed application//

#include <stdio.h>
   int main ()
   {
    int num;

    do{
        printf("Enter a number:");
        scanf("%d", &num);
    }
    while (num!= 7);
     printf ("You entered 7. The End.\n");

     return 0;
   }