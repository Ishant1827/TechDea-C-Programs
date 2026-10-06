#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter rows: ");
    scanf("%d", &rows);

    // Each row prints numbers from 1 to the row number.
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }

    return 0;
}
