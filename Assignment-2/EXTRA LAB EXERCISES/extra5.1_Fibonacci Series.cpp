#include <stdio.h>

// Function Declarations
int fibonacci_recursive(int n);
int fibonacci_iterative(int n);
int fibonacci_iterative_counted(int n, int *opCounter);

// Global counter for recursive calls
int recursiveCalls = 0;

int main() {
    int N;
    
    printf("Enter the number of terms in the Fibonacci sequence: ");
    fflush(stdout);
    scanf("%d", &N);

    if (N <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Recursive Fibonacci Sequence
    printf("\nFibonacci sequence up to %d terms (using recursion):\n", N);
    recursiveCalls = 0;  // Reset before counting
    for (int i = 0; i < N; i++) {
        printf("%d ", fibonacci_recursive(i));
    }

    // Iterative Fibonacci Sequence
    printf("\nFibonacci sequence up to %d terms (using iteration):\n", N);
    for (int i = 0; i < N; i++) {
        printf("%d ", fibonacci_iterative(i));
    }

    // Efficiency comparison
    int iterativeOps = 0;
    for (int i = 0; i < N; i++) {
        fibonacci_iterative_counted(i, &iterativeOps);
    }

    printf("\n\nNth Fibonacci number at position %d:\n", N - 1);
    printf("Using recursive method: %d\n", fibonacci_recursive(N - 1));
    printf("Using iterative method: %d\n", fibonacci_iterative(N - 1));

    printf("\nEfficiency Comparison:\n");
    printf("Total recursive calls: %d\n", recursiveCalls);
    printf("Total iterative operations: %d\n", iterativeOps);

    return 0;
}

// Recursive function to calculate Fibonacci number at position n
int fibonacci_recursive(int n) {
    recursiveCalls++;
    if (n <= 1) {
        return n;
    } else {
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
    }
}

// Iterative function to calculate Fibonacci number at position n (basic)
int fibonacci_iterative(int n) {
    if (n <= 1) {
        return n;
    }

    int a = 0, b = 1, next;
    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

// Iterative function with operation counter
int fibonacci_iterative_counted(int n, int *opCounter) {
    if (n <= 1) {
        (*opCounter)++;  // Counting base operation
        return n;
    }

    int a = 0, b = 1, next;
    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
        (*opCounter)++;  // Count each addition operation
    }
    return b;
}

