#include <stdio.h>

int main() {
    
    double x;
    scanf("%lf",&x);
    unsigned int exponent = (*((unsigned long long*)&x) >> 52) & 0x7FF;

    printf("hex: 0x%X\n", exponent);

    printf("binary: 0b");
    for (int i = 10; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");

    return 0;
}
