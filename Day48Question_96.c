// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    char *word;

    printf("Enter a sentence: ");
    gets(sentence);

    word = strtok(sentence, " ");
    while (word != NULL) {
        for (int i = 0; i < strlen(word) / 2; i++) {
            char temp = word[i];
            word[i] = word[strlen(word) - 1 - i];
            word[strlen(word) - 1 - i] = temp;
        }
        printf("%s ", word);
        word = strtok(NULL, " ");
    }

    return 0;
}