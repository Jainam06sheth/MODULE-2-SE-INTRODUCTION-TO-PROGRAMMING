#include <stdio.h>
#include <string.h>
#include <ctype.h>

void analyzeSentence(const char *sentence, int *wordCount, char *longestWord);

int main() {
    char sentence[1000];
    int wordCount;
    char longestWord[100];

    printf("Enter a sentence:");
    fgets(sentence, sizeof(sentence), stdin);

    printf("%d",sentence[strcspn(sentence, "\n")] = '\0');

    analyzeSentence(sentence, &wordCount, longestWord);

    printf("\nTotal words: %d\n", wordCount);
    printf("Longest word: %s\n", longestWord);

    return 0;
}

void analyzeSentence(const char *sentence, int *wordCount, char *longestWord) {
    int i = 0, length = strlen(sentence);
    int currentLength = 0;
    char currentWord[100] = "";
    *wordCount = 0;
    longestWord[0] = '\0';

    while (i <= length) {
        if (isalpha(sentence[i])) {
            currentWord[currentLength++] = sentence[i];
        } else {
            if (currentLength > 0) {
                currentWord[currentLength] = '\0';
                (*wordCount)++;

                if (strlen(currentWord) > strlen(longestWord)) {
                    strcpy(longestWord, currentWord);
                }

                currentLength = 0;
            }
        }
        i++;
    }
}

