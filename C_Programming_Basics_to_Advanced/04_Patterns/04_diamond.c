#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter half-height: ");
    scanf("%d", &n);

    // Upper half of diamond.
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }

    // Lower half of diamond.
    for (i = n - 1; i >= 1; i--) {
        for (j = n; j > i; j--) printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }

    return 0;
}
