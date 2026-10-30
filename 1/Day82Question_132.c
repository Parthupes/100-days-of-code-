// Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

Explanation:
When the enum value is GREEN, the program prints 'Go'.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN,
    INVALID
};

int main() {
    char input[20];
    if (scanf("%19s", input) != 1) {
        return 1;
    }

    for (int i = 0; input[i]; i++) {
        input[i] = toupper((unsigned char)input[i]);
    }

    enum TrafficLight light = INVALID;
    if (strcmp(input, "RED") == 0) {
        light = RED;
    } else if (strcmp(input, "YELLOW") == 0) {
        light = YELLOW;
    } else if (strcmp(input, "GREEN") == 0) {
        light = GREEN;
    }

    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid Light\n");
            break;
    }

    return 0;
}
