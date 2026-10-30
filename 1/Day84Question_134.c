// Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

Explanation:
FAILURE corresponds to a failed operation message.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT,
    UNKNOWN
};

int main() {
    char input[20];
    if (scanf("%19s", input) != 1) {
        return 1;
    }

    for (int i = 0; input[i]; i++) {
        input[i] = toupper((unsigned char)input[i]);
    }

    enum Status status = UNKNOWN;
    if (strcmp(input, "SUCCESS") == 0) status = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0) status = FAILURE;
    else if (strcmp(input, "TIMEOUT") == 0) status = TIMEOUT;

    switch (status) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
        default:
            printf("Unknown status\n");
            break;
    }

    return 0;
}
