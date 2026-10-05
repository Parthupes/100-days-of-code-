// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>
#include <string.h>

int main() {
    char date[11];
    char new_date[11];
    int day, month, year;

    printf("Enter the date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    switch (month) {
        case 1:
            strcpy(new_date, "Jan");
            break;
        case 2:
            strcpy(new_date, "Feb");
            break;
        case 3:
            strcpy(new_date, "Mar");
            break;
        case 4:
            strcpy(new_date, "Apr");
            break;
        case 5:
            strcpy(new_date, "May");
            break;
        case 6:
            strcpy(new_date, "Jun");
            break;
        case 7:
            strcpy(new_date, "Jul");
            break;
        case 8:
            strcpy(new_date, "Aug");
            break;
        case 9:
            strcpy(new_date, "Sep");
            break;
        case 10:
            strcpy(new_date, "Oct");
            break;
        case 11:
            strcpy(new_date, "Nov");
            break;
        case 12:
            strcpy(new_date, "Dec");
            break;
        default:
            printf("Invalid month.\n");
            return 1;
    }

    printf("The date in the new format is: %02d-%s-%d\n", day, new_date, year);

    return 0;
}