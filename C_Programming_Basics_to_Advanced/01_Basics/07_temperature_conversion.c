#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Fahrenheit = (Celsius * 9/5) + 32
    fahrenheit = (celsius * 9.0f / 5.0f) + 32;

    printf("Fahrenheit = %.2f\n", fahrenheit);
    return 0;
}
