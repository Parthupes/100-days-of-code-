// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    char longestWord[100] = "";
    char *word;

    printf("Enter a sentence: ");
    gets(sentence);

    word = strtok(sentence, " ");
    while (word != NULL) {
        if (strlen(word) > strlen(longestWord)) {
            strcpy(longestWord, word);
        }
        word = strtok(NULL, " ");
    }

    printf("The longest word is: %s\n", longestWord);

    return 0;
}