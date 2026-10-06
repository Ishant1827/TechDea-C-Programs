#include <stdio.h>

int main() {
    unsigned int n;
    int count = 0;

    printf("Enter a non-negative integer: ");
    scanf("%u", &n);

    // Brian Kernighan's method removes one set bit per iteration.
    while (n != 0) {
        n = n & (n - 1);
        count++;
    }

    printf("Set bits = %d\n", count);
    return 0;
}
