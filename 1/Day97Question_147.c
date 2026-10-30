// Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

Explanation:
Binary file operations fwrite() and fread() are used to write and read structure records.

*/

#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee empWrite;
    char token[50];

    // Read employee data
    if (scanf("%49s", token) != 1) return 1;
    if (strcmp(token, "Employee:") == 0) {
        if (scanf("%49s", empWrite.name) != 1) return 1;
    } else {
        strcpy(empWrite.name, token);
    }

    if (scanf("%d %f", &empWrite.id, &empWrite.salary) != 2) {
        return 1;
    }

    // Write to binary file
    FILE *fp = fopen("employee.bin", "wb");
    if (fp == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }
    fwrite(&empWrite, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Read from binary file
    struct Employee empRead;
    fp = fopen("employee.bin", "rb");
    if (fp == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }
    fread(&empRead, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Name: %s | ID: %d | Salary: %.2f\n", empRead.name, empRead.id, empRead.salary);
    return 0;
}
