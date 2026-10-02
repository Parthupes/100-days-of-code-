// Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i, j, found, notFound;

    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams\n");
        return 0;
    }

    for (i = 0; i < strlen(str1); i++) {
        found = 0;
        for (j = 0; j < strlen(str2); j++) {
            if (str1[i] == str2[j]) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            notFound = 1;
            break;
        }
    }

    if (notFound == 1) {
        printf("Not anagrams\n");
    } else {
        printf("Anagrams\n");
    }

    return 0;
}