/* Write a function that checks whether a given number exists
in an array.

You must pass the address of the array and the number to search.

If the number is found, return 1.
Otherwise, return -1.

You must call the function from the main function.
The name of the function should be "search_element".

int main()
{
    int arr[]={23,77,24,65,55};

    // Call function here and print the return value.

    return 0;
}
*/

#include <stdio.h> 
#define MAX 5

 int search_element (int arr[], int value)
  {
    int i;
    for (i=0; i<MAX; i++)
     {
        if (arr[i]== value)
        {
            return 1;
        }
     }
     return -1;
    }
    void display_array(int arr[])
    {
        int i;
        printf("Array: ");
        for (i=0; i< MAX; i++)
        {
            printf ("%d ", arr[i]);
        }
        printf("\n");
    }

    int main()
    
    {
        int arr[]={23, 77, 24, 64, 55}
        int result;
        display_array(arr);
        result = search_element(arr, 65);
        if (result == 1 )
        {
            printf("Elemnent Found. \n");
        }
        else 
        {
            printf("Element Not Found.\n");
        }
        return 0;
    }
  