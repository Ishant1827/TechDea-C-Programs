#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter rows: ");
    scanf("%d", &rows);

    // Print an increasing right-angle triangle of stars.
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    return 0;
}
