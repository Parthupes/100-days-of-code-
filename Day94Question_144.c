// Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

Explanation:
The structure is passed by value to a function that prints its data.

*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

void displayStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student s;
    char token[50];

    if (scanf("%49s", token) != 1) return 1;
    if (strcmp(token, "Student:") == 0) {
        if (scanf("%49s", s.name) != 1) return 1;
    } else {
        strcpy(s.name, token);
    }

    if (scanf("%d %d", &s.roll, &s.marks) != 2) {
        return 1;
    }

    displayStudent(s);
    return 0;
}
