// Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

Explanation:
Both structure instances have identical field values for name, roll number, and marks.

*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s1, s2;
    char token[50];

    // Read first student
    if (scanf("%49s", token) != 1) return 1;
    if (strcmp(token, "Student1:") == 0) {
        if (scanf("%49s", s1.name) != 1) return 1;
    } else {
        strcpy(s1.name, token);
    }
    if (scanf("%d %d", &s1.roll, &s1.marks) != 2) return 1;

    // Read second student
    if (scanf("%49s", token) != 1) return 1;
    if (strcmp(token, "Student2:") == 0) {
        if (scanf("%49s", s2.name) != 1) return 1;
    } else {
        strcpy(s2.name, token);
    }
    if (scanf("%d %d", &s2.roll, &s2.marks) != 2) return 1;

    if (strcmp(s1.name, s2.name) == 0 && s1.roll == s2.roll && s1.marks == s2.marks) {
        printf("Same\n");
    } else {
        printf("Not Same\n");
    }

    return 0;
}
