#include <stdio.h>

int main() {
    char city[50];
    char fullname[50];
    char country[50];


    printf("Enter your city: ");
    scanf("%s", city);


    printf("Enter your full name: ");
    getchar();             
    gets(fullname);


    printf("Enter your country: ");
    fgets(country, 50, stdin);


    printf("\n--- Your Info ---\n");
    printf("City     : %s\n", city);
    printf("Name     : %s\n", fullname);


    printf("Country  : ");
    puts(country);

    return 0;
}