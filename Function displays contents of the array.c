/*The purpose of this function is to print all elements stored in a array one by one 
in the program, the function is void display_array(int datarr[])*/
//we perdefine the define MAX=5

#include <stdio.h>
#define MAX 5
  void display_array (int dataarr[])
   {
    int i;
    printf("\nARRAY:");
    // now we will use a loop to print all the elements of the array one by one 
    for (i=0; i<MAX; i++)\
    {
        printf ("%d\n", dataarr[i]);
    }
   }
   int main()
   {
    int arr[]={23,77,24,65,55};
    display_array (arr);

    return 0;
   }
