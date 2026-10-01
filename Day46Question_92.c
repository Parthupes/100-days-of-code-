// Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>

int main() {
    char str[100];
    int count[26] = {0};

    printf("Enter the string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';

        count[index]++;

        if (count[index] == 2) {
            printf("%c\n", str[i]);
            return 0;
        }
    }

    printf("-1\n");

    return 0;
}