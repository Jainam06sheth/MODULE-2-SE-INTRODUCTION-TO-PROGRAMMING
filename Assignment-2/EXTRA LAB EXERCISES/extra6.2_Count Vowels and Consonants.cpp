#include <stdio.h>
#include <string.h>  // Required for strchr
#include <ctype.h>   // For isalpha, isdigit, tolower

// Function declarations
int isVowel(char ch);
void countCharacters(const char *str, int *vowels, int *consonants, int *digits, int *specials);

int main() {
    char input[1000];  // Directly declare size
    int vowels = 0, consonants = 0, digits = 0, specials = 0;

    // Input
    printf("Enter a string: ");
    if (fgets(input, sizeof(input), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove newline if present
    char *newline = strchr(input, '\n');
    if (newline) {
        *newline = '\0';
    }

    // Count characters
    countCharacters(input, &vowels, &consonants, &digits, &specials);

    // Output
    printf("\n--- Character Count ---\n");
    printf("Vowels            : %d\n", vowels);
    printf("Consonants        : %d\n", consonants);
    printf("Digits            : %d\n", digits);
    printf("Special Characters: %d\n", specials);

    return 0;
}

// Check if character is a vowel
int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

// Count vowels, consonants, digits, and specials
void countCharacters(const char *str, int *vowels, int *consonants, int *digits, int *specials) {
    *vowels = *consonants = *digits = *specials = 0;

    while (*str != '\0') {
        if (isalpha(*str)) {
            if (isVowel(*str)) {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        } else if (isdigit(*str)) {
            (*digits)++;
        } else if (*str != ' ') {
            (*specials)++;
        }
        str++;
    }
}

