#include <stdio.h>

int main() {
    float radius, area;
    const float PI = 3.14159f;

    printf("Enter radius: ");
    scanf("%f", &radius);

    // Formula: Area = PI * r * r
    area = PI * radius * radius;

    printf("Area = %.2f\n", area);
    return 0;
}
