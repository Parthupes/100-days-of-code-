// Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

Explanation:
Iterating through enum values prints each constant with its assigned integer.

*/

#include <stdio.h>

enum Colors {
    RED,
    YELLOW,
    GREEN,
    TOTAL_COLORS
};

int main() {
    const char *colorNames[] = {"RED", "YELLOW", "GREEN"};

    for (int i = RED; i < TOTAL_COLORS; i++) {
        printf("%s=%d\n", colorNames[i], i);
    }

    return 0;
}
