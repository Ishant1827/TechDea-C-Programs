#include <stdio.h>

int main() {
    int a, b, x, y, gcd, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    // Euclidean algorithm finds the GCD efficiently.
    while (y != 0) {
        int r = x % y;
        x = y;
        y = r;
    }

    gcd = x;
    lcm = (a / gcd) * b;

    printf("GCD = %d\nLCM = %d\n", gcd, lcm);
    return 0;
}
