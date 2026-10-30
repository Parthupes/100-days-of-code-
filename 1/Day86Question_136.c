// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

Explanation:
The enum ADD triggers addition of 10 and 20.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum MenuChoice {
    ADD = 1,
    SUBTRACT,
    MULTIPLY,
    INVALID
};

int main() {
    char choiceStr[20];
    int num1, num2;

    if (scanf("%19s %d %d", choiceStr, &num1, &num2) != 3) {
        return 1;
    }

    for (int i = 0; choiceStr[i]; i++) {
        choiceStr[i] = toupper((unsigned char)choiceStr[i]);
    }

    enum MenuChoice choice = INVALID;
    if (strcmp(choiceStr, "ADD") == 0 || strcmp(choiceStr, "1") == 0) choice = ADD;
    else if (strcmp(choiceStr, "SUBTRACT") == 0 || strcmp(choiceStr, "2") == 0) choice = SUBTRACT;
    else if (strcmp(choiceStr, "MULTIPLY") == 0 || strcmp(choiceStr, "3") == 0) choice = MULTIPLY;

    switch (choice) {
        case ADD:
            printf("%d\n", num1 + num2);
            break;
        case SUBTRACT:
            printf("%d\n", num1 - num2);
            break;
        case MULTIPLY:
            printf("%d\n", num1 * num2);
            break;
        default:
            printf("Invalid operation\n");
            break;
    }

    return 0;
}
