#include <stdio.h>

main() {
    float num1, num2, result;
    char _operator;
	printf("-----SIMPLE CALCULATOR-----\n");
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &_operator);

    switch (_operator) {
        case '+':
            result = num1 + num2;
            printf("So %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if ((int)num2 != 0) {
                int int1 = (int)num1;
                int int2 = (int)num2;
                int Result = int1 % int2;
                printf("%d %% %d = %d\n", int1, int2, Result);
            } else {
                printf("Error: Cannot modulus by zero.\n");
            }
            break;
        default:
            printf("Error: Invalid operator '%c'. Please use +, -, *, /, %%.\n", _operator);
            break;
    }

}

