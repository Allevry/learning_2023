#include <stdio.h>
#include <stdint.h>

int main() {
    int32_t num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int i;
    for (i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
    
    return 0;
}