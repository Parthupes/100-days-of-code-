// Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

Explanation:
All lowercase letters in input.txt are converted to uppercase using character manipulation before writing to output.txt.

*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    FILE *fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error: Could not open output.txt\n");
        fclose(fin);
        return 1;
    }

    int ch;
    while ((ch = fgetc(fin)) != EOF) {
        fputc(toupper((unsigned char)ch), fout);
    }

    fclose(fin);
    fclose(fout);

    printf("File converted successfully to output.txt\n");
    return 0;
}
