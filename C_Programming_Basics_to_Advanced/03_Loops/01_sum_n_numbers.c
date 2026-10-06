#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    // Add every integer from 1 to n.
    for (i = 1; i <= n; i++)
        sum += i;

    printf("Sum = %d\n", sum);
    return 0;
}
