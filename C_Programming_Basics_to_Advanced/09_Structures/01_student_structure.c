#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter name: ");
    scanf(" %49[^\n]", s.name);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Display all fields stored in the structure.
    printf("\nStudent Details\n");
    printf("Roll: %d\nName: %s\nMarks: %.2f\n",
           s.roll, s.name, s.marks);

    return 0;
}
