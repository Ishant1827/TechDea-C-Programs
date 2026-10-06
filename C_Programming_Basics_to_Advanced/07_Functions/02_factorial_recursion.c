#include <stdio.h>

// Recursive factorial function: n! = n * (n-1)!.
unsigned long long factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    printf("Factorial = %llu\n", factorial(n));
    return 0;
}
