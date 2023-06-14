#include <stdio.h>

int main() {
    printf("enter array size : ");
    int size;
    scanf("%d", &size);
    int a[size];
    printf("enter elements :\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    int sum = 0;
    for (int i = 0; i < size; i += 2) {
        sum += a[i];
    }

    printf("Sum of alternate elements: %d\n", sum);

    return 0;
}
