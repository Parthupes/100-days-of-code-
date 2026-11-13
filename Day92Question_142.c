// Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

Explanation:
The array of structures stores multiple student records and displays them in a table.

*/

#include <stdio.h>

#define NUM_STUDENTS 5

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student students[NUM_STUDENTS];

    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter details for student %d (Name Roll Marks): ", i + 1);
        if (scanf("%49s %d %d", students[i].name, &students[i].roll, &students[i].marks) != 3) {
            return 1;
        }
    }

    printf("\n%-15s %-10s %-10s\n", "Name", "Roll No", "Marks");
    printf("------------------------------------\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("%-15s %-10d %-10d\n", students[i].name, students[i].roll, students[i].marks);
    }

    return 0;
}
