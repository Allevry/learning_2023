#include <stdio.h>

int main() {
    float operand1, operand2, result;
    char operator;

    printf("Enter Operand 1: ");
    scanf("%f", &operand1);

    printf("Enter Operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter Operand 2: ");
    scanf("%f", &operand2);

    switch (operator) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            if (operand2 != 0)
                result = operand1 / operand2;
            else {
                printf("Error: Division by zero!\n");
                return 1;  // Exit the program with an error code
            }
            break;
        default:
            printf("Error: Invalid operator!\n");
            return 1;  // Exit the program with an error code
    }

    printf("Result: %.2f\n", result);

    return 0;
}
