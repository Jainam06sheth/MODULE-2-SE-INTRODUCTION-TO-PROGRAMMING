#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isNumberPalindrome(int num);
int isStringPalindrome(char *str);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isNumberPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    char str[100];
    printf("Enter a string: ");
    scanf("%*c"); // Consume newline character
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character
    if (isStringPalindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}

int isNumberPalindrome(int num) {
    int reversed = 0;
    int original = num;
    while (num != 0) {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return original == reversed;
}

int isStringPalindrome(char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (!isalpha(str[left])) {
            left++;
        } else if (!isalpha(str[right])) {
            right--;
        } else if (tolower(str[left]) != tolower(str[right])) {
            return 0;
        } else {
            left++;
            right--;
        }
    }
    return 1;
}

