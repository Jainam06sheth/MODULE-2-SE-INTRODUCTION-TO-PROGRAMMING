#include <stdio.h>

main() {
    int n, digit, sum=0, reverse=0;

    printf("Enter an integer:\n");
    scanf("%d", &n);

    int temp = n;  

    while (temp != 0) {
        digit = temp % 10;
        sum += digit;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }

    printf("Sum of digits of %d:%d\n", n, sum);
    printf("Reversed number:%d\n", reverse);
}

