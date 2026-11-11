// Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

Explanation:
The enum inside the struct allows representing gender as a named constant.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER,
    UNKNOWN
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    char input[50];
    if (scanf("%49s", input) != 1) {
        return 1;
    }

    // Support format like "Gender=MALE" or plain "MALE"
    char *genderStr = input;
    char *equalSign = strchr(input, '=');
    if (equalSign != NULL) {
        genderStr = equalSign + 1;
    }

    for (int i = 0; genderStr[i]; i++) {
        genderStr[i] = toupper((unsigned char)genderStr[i]);
    }

    struct Person p;
    strcpy(p.name, "User");

    if (strcmp(genderStr, "MALE") == 0) {
        p.gender = MALE;
    } else if (strcmp(genderStr, "FEMALE") == 0) {
        p.gender = FEMALE;
    } else if (strcmp(genderStr, "OTHER") == 0) {
        p.gender = OTHER;
    } else {
        p.gender = UNKNOWN;
    }

    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Unknown Gender\n");
            break;
    }

    return 0;
}
