#include <stdio.h>
#include <math.h>

int main() {
    int n, original, digits = 0, digit;
    int sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    original = n;

    // Count the number of digits.
    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    // Add each digit raised to the total number of digits.
    while (temp != 0) {
        digit = temp % 10;
        sum += (int)pow(digit, digits);
        temp /= 10;
    }

    if (sum == original)
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

    return 0;
}
