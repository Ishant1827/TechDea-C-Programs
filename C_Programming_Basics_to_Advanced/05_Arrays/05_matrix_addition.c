#include <stdio.h>

int main() {
    int r, c, i, j;
    int a[10][10], b[10][10], sum[10][10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter first matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    // Add corresponding elements of both matrices.
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("Sum matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}
