#include <stdio.h>

int main(){
    int grade;
    printf("Enter grade : ");
    scanf("%d", &grade);
    if(grade>=90 && grade <=100)
        printf("Grade A");
    else if(grade>=75 && grade <=89)
        printf("Grade B");
    else if(grade>=60 && grade <=74)
        printf("Grade C");
    else if(grade>=50 && grade <=59)
        printf("Grade D");
    else 
        printf("Grade F");

    return 0;
}
