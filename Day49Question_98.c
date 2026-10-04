// Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>

int main() {
    char first[50], middle[50], surname[50];

    printf("Enter your full name: ");
    scanf("%s %s %s", first, middle, surname);

    printf("%c.%c. %s\n", first[0], middle[0], surname);

    return 0;
}