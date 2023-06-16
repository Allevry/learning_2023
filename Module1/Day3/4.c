#include <stdio.h>

void findSmallestLargestDigits(int n, int numbers[]);

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int numbers[n];
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    findSmallestLargestDigits(n, numbers);

    return 0;
}

void findSmallestLargestDigits(int n, int numbers[]) {
    for (int i = 0; i < n; i++) {
        int number = numbers[i];
        int smallest = 9;
        int largest = 0;

        while (number > 0) {
            int digit = number % 10;
            if (digit < smallest) {
                smallest = digit;
            }
            if (digit > largest) {
                largest = digit;
            }
            number /= 10;
        }

        if (smallest == largest) {
            printf("Not Valid\n");
        } else {
            printf("%d and %d\n", smallest, largest);
        }
    }
}
