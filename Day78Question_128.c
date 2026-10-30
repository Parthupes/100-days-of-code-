// Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

Explanation:
The program iterates through each character, counts vowels (A, E, I, O, U) and consonants, ignoring other symbols.

*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("text.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open text.txt\n");
        return 1;
    }

    int vowels = 0;
    int consonants = 0;
    int ch;

    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha((unsigned char)ch)) {
            char lower = tolower((unsigned char)ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
