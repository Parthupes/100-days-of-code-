// Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

Explanation:
Enum value determines which message is displayed.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Role {
    ADMIN,
    USER,
    GUEST,
    INVALID
};

int main() {
    char input[20];
    if (scanf("%19s", input) != 1) {
        return 1;
    }

    for (int i = 0; input[i]; i++) {
        input[i] = toupper((unsigned char)input[i]);
    }

    enum Role role = INVALID;
    if (strcmp(input, "ADMIN") == 0) role = ADMIN;
    else if (strcmp(input, "USER") == 0) role = USER;
    else if (strcmp(input, "GUEST") == 0) role = GUEST;

    switch (role) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Invalid Role\n");
            break;
    }

    return 0;
}
