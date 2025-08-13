#include <stdio.h>

int factorial(int n);
int binomialLoop(int n, int k);
int binomialRecursive(int n, int k);
int getMaxWidth(int rows);
void printPascalTriangle(int rows, int useRecursion);

int main() {
    int rows;
    printf("Enter number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    printf("\nPascal's Triangle using loops:\n");
    printPascalTriangle(rows, 0);

    printf("\nPascal's Triangle using recursion:\n");
    printPascalTriangle(rows, 1);

    return 0;
}

int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

int binomialLoop(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int binomialRecursive(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return binomialRecursive(n - 1, k - 1) + binomialRecursive(n - 1, k);
}

int getMaxWidth(int rows) {
    int max = binomialLoop(rows - 1, (rows - 1) / 2);
    int width = 0;
    while (max > 0) {
        width++;
        max /= 10;
    }
    return width + 1; 
}

void printPascalTriangle(int rows, int useRecursion) {
    int width = getMaxWidth(rows);
    for (int i = 0; i < rows; i++) {
    
        int totalWidth = (rows * width);
        int rowWidth = (i + 1) * width;
        int padding = (totalWidth - rowWidth) / 2;
        for (int space = 0; space < padding; space++)
            printf(" ");
            
        for (int j = 0; j <= i; j++) {
            int value = useRecursion ? binomialRecursive(i, j) : binomialLoop(i, j);
            printf("%*d", width, value);
        }
        printf("\n");
    }
}

