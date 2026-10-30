// Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

Explanation:
Output File (data.txt after execution): Hello world\nThis is appended text.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char filename[100];
    char text[256];

    printf("Enter filename: ");
    if (scanf("%99s", filename) != 1) {
        return 1;
    }

    // Clear newline leftover from scanf
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Enter text to append: ");
    if (fgets(text, sizeof(text), stdin) == NULL) {
        return 1;
    }

    // Strip trailing newline character from input
    text[strcspn(text, "\r\n")] = '\0';

    // Check if existing file needs a newline separator
    int needsNewline = 0;
    FILE *checkFp = fopen(filename, "r");
    if (checkFp != NULL) {
        fseek(checkFp, 0, SEEK_END);
        long size = ftell(checkFp);
        if (size > 0) {
            fseek(checkFp, -1, SEEK_END);
            int lastChar = fgetc(checkFp);
            if (lastChar != '\n') {
                needsNewline = 1;
            }
        }
        fclose(checkFp);
    }

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    if (needsNewline) {
        fprintf(fp, "\n%s", text);
    } else {
        fprintf(fp, "%s", text);
    }

    fclose(fp);

    printf("File updated successfully with appended text.\n");
    return 0;
}
