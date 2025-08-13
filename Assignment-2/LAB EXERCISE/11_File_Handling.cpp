#include <stdio.h>

int main() {
    FILE *file;
    const char *filename = "test.txt";
    const char *text = "Hello, Sir! My name is Jainam.\nI am from Ahmedabad.";

    // Step 1: Create and open the file for writing
    file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return EXIT_FAILURE;
    }

    // Step 2: Write the string into the file
    if (fprintf(file, "%s", text) < 0) {
        perror("Error writing to file");
        fclose(file);
        return EXIT_FAILURE;
    }

    // Step 3: Close the file
    fclose(file);

    // Step 4: Reopen the file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return EXIT_FAILURE;
    }

    // Step 5: Read and display the contents
    printf("Contents of '%s':\n", filename);
    int ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Step 6: Close the file again
    fclose(file);

    return EXIT_SUCCESS;
}

