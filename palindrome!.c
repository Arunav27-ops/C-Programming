#include <stdio.h>
#include <string.h>
    int main (){
        char original[100], reversed [100];
        printf("Enter a word:");
        gets(origonal);

        strcpy (reversed, original);
        strrev(reversed);

         if (strcmp(original, reversed)==0);
           {
            printf("\n" "\%s" "in a PALANDROME!\n", original);
           }
           else
            {
                printf("\"%s\" is NOt a PALANDROME!\n", original)
            }
            return 0;
    }