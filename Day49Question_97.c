// Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    // Remove the newline character if present
    name[strcspn(name, "\n")] = 0;

    // Print the first character of the first word
    printf("%c.", name[0]);

    // Find the space and print the first character of the second word
    for (int i = 0; i < strlen(name); i++) {
        if (name[i] == ' ') {
            printf("%c.", name[i + 1]);
            break;
        }
    }

    printf("\n");

    return 0;
}