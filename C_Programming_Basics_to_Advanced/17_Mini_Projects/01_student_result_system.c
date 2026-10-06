#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float m1, m2, m3;
};

int main() {
    struct Student s;
    float total, percentage;

    // Read student information.
    printf("Enter student name: ");
    scanf(" %49[^\n]", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks of 3 subjects: ");
    scanf("%f %f %f", &s.m1, &s.m2, &s.m3);

    // Calculate total and percentage.
    total = s.m1 + s.m2 + s.m3;
    percentage = total / 3.0f;

    printf("\n--- Result ---\n");
    printf("Name: %s\nRoll: %d\nTotal: %.2f\nPercentage: %.2f%%\n",
           s.name, s.roll, total, percentage);

    if (percentage >= 40)
        printf("Result: PASS\n");
    else
        printf("Result: FAIL\n");

    return 0;
}
