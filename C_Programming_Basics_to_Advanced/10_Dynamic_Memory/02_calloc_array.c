#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *a;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // calloc allocates memory and initializes the allocated bytes to zero.
    a = calloc(n, sizeof(int));

    if (a == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Initial values: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
    free(a);

    return 0;
}
