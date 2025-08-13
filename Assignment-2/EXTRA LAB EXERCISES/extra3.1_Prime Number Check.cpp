#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Stage 1: Check if the number is prime
    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    printf("Prime numbers between 1 and %d are:\n", num);
    for (int i = 2; i <= num; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}

