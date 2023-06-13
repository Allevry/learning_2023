#include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    float physics, math, chemistry;
    float totalMarks, percentage;

    printf("Enter Roll No: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]s", name);

    printf("Enter Marks of Physics: ");
    scanf("%f", &physics);

    printf("Enter Marks of Math: ");
    scanf("%f", &math);

    printf("Enter Marks of Chemistry: ");
    scanf("%f", &chemistry);

    totalMarks = physics + math + chemistry;
    percentage = (totalMarks / 300) * 100;

    printf("\n---------- Student Summary ----------\n");
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics : %.2f\n", physics);
    printf("Math : %.2f\n", math);
    printf("Chemistry : %.2f\n", chemistry);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
