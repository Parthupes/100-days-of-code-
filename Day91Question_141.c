// Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

Explanation:
The program stores and displays one student's details using structure members.

*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;
    char token[50];

    // Read Name
    if (scanf("%49s", token) != 1) return 1;
    if (strcmp(token, "Name:") == 0) {
        if (scanf("%49s", s.name) != 1) return 1;
    } else {
        strcpy(s.name, token);
    }

    // Read Roll
    if (scanf("%49s", token) != 1) return 1;
    if (strcmp(token, "Roll:") == 0) {
        if (scanf("%d", &s.roll_no) != 1) return 1;
    } else {
        sscanf(token, "%d", &s.roll_no);
    }

    // Read Marks
    if (scanf("%49s", token) != 1) return 1;
    if (strcmp(token, "Marks:") == 0) {
        if (scanf("%d", &s.marks) != 1) return 1;
    } else {
        sscanf(token, "%d", &s.marks);
    }

    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
    return 0;
}
