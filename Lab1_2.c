/* Write a program that takes a number from the user.
    A loop prints the statments "Lab1" n times,
    where n is the number entered by the user. */
    // Name your program Lab1_2. If you are using an installed application//

    #include <stdio.h>
        int main()
        {
            int n, i;

            printf(" Enter a number:");
            scanf("%d" , &n);
            for (i =0; i < n; i++)
            {
                printf(" Lab1\n");
            }
            return 0;
        
        }