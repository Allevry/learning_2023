#include <stdio.h>

int main(){
    int n1,n2;
    printf("Enter 2 numbers\n");
    scanf("%d%d", &n1,&n2);
    
    printf("Using if-else : ");
    if(n1>n2)
        printf("%d", n1);
    else
        printf("%d", n2);
    printf("\nUsing ternary operator : ");
    printf("%d", (n1>n2) ? n1 : n2);
    return 0;
}
