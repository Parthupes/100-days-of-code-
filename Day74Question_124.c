// Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

Explanation:
Expected File (destination.txt): Learning C File Handling

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char sourceFile[100];
    char destFile[100];

    printf("Enter source filename: ");
    if (scanf("%99s", sourceFile) != 1) {
        return 1;
    }

    printf("Enter destination filename: ");
    if (scanf("%99s", destFile) != 1) {
        return 1;
    }

    FILE *src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error: Could not open source file %s\n", sourceFile);
        return 1;
    }

    FILE *dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Could not open destination file %s\n", destFile);
        fclose(src);
        return 1;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", destFile);
    return 0;
}
