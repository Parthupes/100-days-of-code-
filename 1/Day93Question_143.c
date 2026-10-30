// Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

Explanation:
Program compares marks of all students and prints the one with the highest.

*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    struct Student students[100];
    if (n > 100) n = 100;
    int topperIdx = 0;

    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number, and marks for student %d: ", i + 1);
        if (scanf("%49s %d %d", students[i].name, &students[i].roll, &students[i].marks) != 3) {
            return 1;
        }
        if (students[i].marks > students[topperIdx].marks) {
            topperIdx = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", students[topperIdx].name, students[topperIdx].marks);
    return 0;
}
