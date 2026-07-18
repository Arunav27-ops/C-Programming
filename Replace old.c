/* Write a function that replaces an old value with a new value
in an array.

You must pass the address of the array, the old value,
and the new value.

If the old value is found and replaced, return 0.
Otherwise, return -1.

You must call the function from the main function.
The name of the function should be "replace_element".

int main()
{
    int arr[]={23,77,24,65,55};

    // Call function here and print the return value.

    return 0;
}
*/
#include <stdio.h>

#define MAX 5

//------------------------------------------
// Function to replace an element by value
//------------------------------------------
int replace_element(int arr[], int old_value, int new_value)
{
    int i;

    for(i = 0; i < MAX; i++)
    {
        if(arr[i] == old_value)
        {
            arr[i] = new_value;
            return 0;   // Replacement successful
        }
    }

    return -1;  // Old value not found
}

//------------------------------------------
// Function to display the array
//------------------------------------------
void display_array(int arr[])
{
    int i;

    printf("Array: ");
    for(i = 0; i < MAX; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

//------------------------------------------
// Main Function
//------------------------------------------
int main()
{
    int arr[] = {23, 77, 24, 65, 55};
    int result;

    printf("Before Replacement:\n");
    display_array(arr);

    result = replace_element(arr, 24, 100);

    if(result == 0)
        printf("Element replaced successfully.\n");
    else
        printf("Element not found.\n");

    printf("After Replacement:\n");
    display_array(arr);

    return 0;
}