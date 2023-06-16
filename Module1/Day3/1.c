#include <stdio.h>

int n;
void print1(int x){
    for(int i = 1; i <= x; i++) {
            printf("%d", i);
    }
}
void print2(int x){
    for(int i = 1; i <= 2*(n-x); i++) {
            printf(" ");
    }
}
void print3(int x){
    for(int i = x; i >= 1; i--) {
            printf("%d", i);
    }
}
int main() {
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    int i, j;
    for (i = n; i >= 1; i--) {
        print1(i);
        print2(i);
        print3(i);
        printf("\n");
    }
    
    return 0;
}

