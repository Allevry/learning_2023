#include <stdio.h>

// Function to swap two values of any type
void swap(void* ptr1, void* ptr2, size_t size) {
    char temp[size]; // Temporary buffer

    // Copy the contents of ptr1 to temp
    char* tempPtr = (char*)ptr1;
    for (size_t i = 0; i < size; i++) {
        temp[i] = tempPtr[i];
    }

    // Copy the contents of ptr2 to ptr1
    char* ptr1Ptr = (char*)ptr1;
    char* ptr2Ptr = (char*)ptr2;
    for (size_t i = 0; i < size; i++) {
        ptr1Ptr[i] = ptr2Ptr[i];
    }

    // Copy the contents of temp to ptr2
    for (size_t i = 0; i < size; i++) {
        ptr2Ptr[i] = temp[i];
    }
}

int main() {
    int a = 5, b = 10;
    printf("Integer a = %d, b = %d\n", a, b);
    double x = 1.23, y = 4.56;
    printf("Double x = %lf, y = %lf\n", x, y);
    
    swap(&a, &b, sizeof(int));
    printf("Integer swap: a = %d, b = %d\n", a, b);
    swap(&x, &y, sizeof(double));
    printf("Double swap: x = %lf, y = %lf\n", x, y);

    return 0;
}
