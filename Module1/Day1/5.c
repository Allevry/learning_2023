#include <stdio.h>

int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:
            num |= 1;  // Set the 1st bit
            break;
        case 2:
            num &= ~(1 << 31);  // Clear the 31st bit
            break;
        case 3:
            num ^= (1 << 16);  // Toggle the 16th bit
            break;
        default:
            printf("Invalid operation type!\n");
            break;
    }

    return num;
}

int main() {
    int number, opType, result;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Enter operation type (1, 2, or 3): ");
    scanf("%d", &opType);

    result = bit_operations(number, opType);

    printf("Result: %d\n", result);

    return 0;
}

