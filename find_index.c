/*Write a function that returns the index of given number in an array. You must pass the address 
of the array number to search for ,
 if the number is not  found the function returns -5*/

/* You must call the function from the main function. The name of the function shold be 
"find_index". The main function is given below.*/

/*

int main()
{ int arr[]={36,55,45,96,-9};
 //call function here and print the return value.//
  return 0;
}

 */
 /*--------------------------------------------------------------------------------------*/

#include <stdio.h>
#define MAX 5

int find_index(int find_index[], int num)
 {
    int i;
    for (i=0; i<MAX; i++)
    {
        if (find_index[i]==num)
        {
            printf("The number is found in the index");
        return i;
        }
    }
    printf("the number is not found");
    return -5;
 }



int main ()
{
    int arr[]={36,55,45,96,-9};
    /* here we call a function to find the index. and let call the function find_index
    and pass the address of the array (arr) and the number we searching for. */
    
    int index = find_index(arr,-9); // we are searching for 45 in the array.
    printf(" %d\n", index);
    return 0;
    
}