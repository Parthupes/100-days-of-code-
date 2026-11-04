// Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

Explanation:
February has 28 days in a normal year and 29 in a leap year.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC,
    UNKNOWN
};

int main() {
    char input[20];
    if (scanf("%19s", input) != 1) {
        return 1;
    }

    for (int i = 0; input[i]; i++) {
        input[i] = toupper((unsigned char)input[i]);
    }

    enum Month m = UNKNOWN;
    if (strcmp(input, "JAN") == 0 || strcmp(input, "JANUARY") == 0) m = JAN;
    else if (strcmp(input, "FEB") == 0 || strcmp(input, "FEBRUARY") == 0) m = FEB;
    else if (strcmp(input, "MAR") == 0 || strcmp(input, "MARCH") == 0) m = MAR;
    else if (strcmp(input, "APR") == 0 || strcmp(input, "APRIL") == 0) m = APR;
    else if (strcmp(input, "MAY") == 0) m = MAY;
    else if (strcmp(input, "JUN") == 0 || strcmp(input, "JUNE") == 0) m = JUN;
    else if (strcmp(input, "JUL") == 0 || strcmp(input, "JULY") == 0) m = JUL;
    else if (strcmp(input, "AUG") == 0 || strcmp(input, "AUGUST") == 0) m = AUG;
    else if (strcmp(input, "SEP") == 0 || strcmp(input, "SEPTEMBER") == 0) m = SEP;
    else if (strcmp(input, "OCT") == 0 || strcmp(input, "OCTOBER") == 0) m = OCT;
    else if (strcmp(input, "NOV") == 0 || strcmp(input, "NOVEMBER") == 0) m = NOV;
    else if (strcmp(input, "DEC") == 0 || strcmp(input, "DECEMBER") == 0) m = DEC;

    switch (m) {
        case FEB:
            printf("28 or 29 days\n");
            break;
        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days\n");
            break;
        case JAN:
        case MAR:
        case MAY:
        case JUL:
        case AUG:
        case OCT:
        case DEC:
            printf("31 days\n");
            break;
        default:
            printf("Invalid Month\n");
            break;
    }

    return 0;
}
