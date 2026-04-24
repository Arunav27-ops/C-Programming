#include <stdio.h>
#include <string.h>

int main() {
    char str[80];
    int vowels = 0, consonants = 0;
    int len, i;
    char ch;

    printf("Enter a string: ");
    fgets(str);

    len = strlen(str);  

    for (i = 0; i < len; i++) {
        ch = str[i];

        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            vowels++;

      
        else if ((ch >= 'a' && ch <= 'z') ||
                 (ch >= 'A' && ch <= 'Z'))
            consonants++;
    }

    printf("\nString     : %s\n",   str);
    printf("Length     : %d\n",   len);
    printf("Vowels     : %d\n",   vowels);
    printf("Consonants : %d\n",   consonants);

    return 0;
}