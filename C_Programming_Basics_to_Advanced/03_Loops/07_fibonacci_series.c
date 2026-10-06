#include <stdio.h>

int main() {
    int n, i;
    long long a = 0, b = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Each Fibonacci term is the sum of the previous two terms.
    for (i = 1; i <= n; i++) {
        printf("%lld ", a);
        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
