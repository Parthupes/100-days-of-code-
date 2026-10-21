// Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter string: ");
    if (fgets(s, sizeof(s), stdin) == NULL) return 0;

    size_t len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
        len--;
    }

    int last_idx[256];
    for (int i = 0; i < 256; i++) {
        last_idx[i] = -1;
    }

    int max_len = 0;
    int start = 0;

    for (int i = 0; i < (int)len; i++) {
        unsigned char c = (unsigned char)s[i];
        if (last_idx[c] >= start) {
            start = last_idx[c] + 1;
        }
        last_idx[c] = i;
        int curr_len = i - start + 1;
        if (curr_len > max_len) {
            max_len = curr_len;
        }
    }

    printf("%d\n", max_len);
    return 0;
}