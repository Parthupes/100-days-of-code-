// Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char vowels[] = "aeiouAEIOU";
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; vowels[j] != '\0'; j++) {
            if (str[i] == vowels[j]) {
                
                for (int k = i; str[k] != '\0'; k++) {
                    str[k] = str[k + 1];
                }
                i--;
                break;
            }
        }
    }

    printf("String after removing vowels: %s\n", str);

    return 0;
}