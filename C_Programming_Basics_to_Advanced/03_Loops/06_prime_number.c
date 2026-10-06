#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 2)
        isPrime = 0;
    else {
        // Testing divisors only up to sqrt(n) is sufficient.
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    printf("%s\n", isPrime ? "Prime" : "Not Prime");
    return 0;
}
