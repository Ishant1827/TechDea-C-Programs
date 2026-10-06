#include <stdio.h>

int main() {
    int n, original, reverse = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    // Reverse the number and compare it with the original.
    while (n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    if (original == reverse)
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");

    return 0;
}
