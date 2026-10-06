#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, sum = 0;
    int *a;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory dynamically at runtime.
    a = malloc(n * sizeof(int));

    if (a == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("Sum = %d\n", sum);

    // Always release dynamically allocated memory.
    free(a);
    return 0;
}
