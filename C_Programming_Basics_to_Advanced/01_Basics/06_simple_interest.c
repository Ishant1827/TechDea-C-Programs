#include <stdio.h>

int main() {
    float principal, rate, time, si;

    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    // Simple Interest = (P * R * T) / 100
    si = (principal * rate * time) / 100;

    printf("Simple Interest = %.2f\n", si);
    return 0;
}
