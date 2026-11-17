// Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

Explanation:
Nested structure Date is used inside Employee structure to represent joining date.

*/

#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;
};

int main() {
    struct Employee emp;
    char token[50];

    // Handles flexible format like: "Employee: Raj | ID: 11 | Joining Date: 12 05 2020" or "Raj 11 12 5 2020"
    if (scanf("%49s", token) != 1) return 1;
    if (strcmp(token, "Employee:") == 0) {
        if (scanf("%49s", emp.name) != 1) return 1;
    } else {
        strcpy(emp.name, token);
    }

    while (scanf("%49s", token) == 1) {
        if (strcmp(token, "|") == 0 || strcmp(token, "ID:") == 0) {
            continue;
        }
        if (sscanf(token, "%d", &emp.id) == 1) {
            break;
        }
    }

    while (scanf("%49s", token) == 1) {
        if (strcmp(token, "|") == 0 || strcmp(token, "Joining") == 0 || strcmp(token, "Date:") == 0) {
            continue;
        }
        if (sscanf(token, "%d", &emp.joiningDate.day) == 1) {
            break;
        }
    }

    if (scanf("%d %d", &emp.joiningDate.month, &emp.joiningDate.year) != 2) {
        return 1;
    }

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           emp.name, emp.id, emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);

    return 0;
}
