#include <stdio.h>
#define MAX 100
/* create a function with  a loop thats run 100 time caz MAX 100, a variable int i, everytime the loop run it increment +1 till fulfil
the condition, when the condition fulfil the loop break and go to the main function......... 
here,
 void----- is the return type, 
 duisplay_array--------- is the function name
 (int datarr[])------ is the parameters / arguments*/
 
void display_array(int datarr[])
{
    int i;
    printf("\nARRAY: ");

    for(i = 0; i < MAX; i++)
    {
        printf("%d ", datarr[i]);
    }
}

int main()
{
    int arr[MAX];
    int start, i;

    printf("Enter starting number: ");
    scanf("%d", &start);

    arr[0] = start;

    for(i = 1; i < MAX; i++)
    {
        arr[i] = arr[i-1] + 5;
    }

    display_array(arr);

    return 0;
}