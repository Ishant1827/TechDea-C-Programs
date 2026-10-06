#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Multiply all integers from 1 through n.
    for (i = 1; i <= n; i++)
        factorial *= i;

    printf("Factorial = %llu\n", factorial);
    return 0;
}
