#include <stdio.h>

int findL(int num);

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largest = findL(num);
    printf("Largest number by deleting a single digit: %d\n", largest);

    return 0;
}

int findL(int num) {
    int largest = 0;
    int temp = num;
    for (int i = 0; i < 4; i++) {
        int divisor = 1;
        for (int j = 0; j < i; j++) {
            divisor *= 10;
        }

        int digit = (temp / divisor) % 10;
        int result = (temp / (divisor * 10)) * divisor + (temp % divisor);

        if (result > largest) {
            largest = result;
        }
    }

    return largest;
}
