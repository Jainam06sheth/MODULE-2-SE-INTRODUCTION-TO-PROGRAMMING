#include <stdio.h>

#define MAX_LEN 1000  // Maximum input length

// Function to calculate string length
int my_strlen(const char *str);

// Function to reverse a string in place
void my_strrev(char *str);
int main() {
    char input[MAX_LEN];

    // Input
    printf("Enter a string: ");
    if (fgets(input, MAX_LEN, stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove newline manually (no strchr or string.h)
    int i = 0;
    while (input[i] != '\0') {
        if (input[i] == '\n') {
            input[i] = '\0';
            break;
        }
        i++;
    }

    // Reverse the string
    my_strrev(input);

    // Output
    printf("Reversed string: %s\n", input);

    return 0;
}

int my_strlen(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void my_strrev(char *str) {
    int left = 0;
    int right = my_strlen(str) - 1;
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}
