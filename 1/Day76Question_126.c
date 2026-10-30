// Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

/*
Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Explanation:
The program opens the existing file and prints its content using fgets().

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

Explanation:
Since fopen() returns NULL, an error message is displayed instead of reading.

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];

    printf("Enter filename: ");
    if (scanf("%99s", filename) != 1) {
        return 1;
    }

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n");
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);
    return 0;
}
