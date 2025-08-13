#include <stdio.h>
#include <time.h>

// Function prototypes
long long factorial_iterative(int n);
long long factorial_recursive(int n);

int main() {
    int num;
    long long result;
    struct timespec start, end;
    double time_taken;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    // Overflow safety for 64-bit long long
    if (num > 20) {
        printf("Warning: Factorial of %d will overflow a 64-bit integer.\n", num);
        printf("Calculation will still proceed, but result will be incorrect.\n");
    }

    // Iterative version with high-precision timing
    clock_gettime(CLOCK_MONOTONIC, &start);
    result = factorial_iterative(num);
    clock_gettime(CLOCK_MONOTONIC, &end);
    time_taken = (end.tv_sec - start.tv_sec) + 
                 (end.tv_nsec - start.tv_nsec) / 1e9;
    printf("\nFactorial of %d (Iterative) = %lld\n", num, result);
    printf("Time (Iterative): %.12f seconds\n", time_taken);

    // Recursive version with high-precision timing
    clock_gettime(CLOCK_MONOTONIC, &start);
    result = factorial_recursive(num);
    clock_gettime(CLOCK_MONOTONIC, &end);
    time_taken = (end.tv_sec - start.tv_sec) + 
                 (end.tv_nsec - start.tv_nsec) / 1e9;
    printf("\nFactorial of %d (Recursive) = %lld\n", num, result);
    printf("Time (Recursive): %.12f seconds\n", time_taken);

    return 0;
}

// Iterative factorial
long long factorial_iterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Recursive factorial
long long factorial_recursive(int n) 
{
    if (n == 0 || n == 1){
    	return 1;
	}
        
    else{
    	return n * factorial_recursive(n - 1);
	}
        
}

