#include <stdio.h>

int main() {
    int a[100], n, i, j, minIndex, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    // Select the smallest remaining element and place it at the current index.
    for (i = 0; i < n - 1; i++) {
        minIndex = i;

        for (j = i + 1; j < n; j++)
            if (a[j] < a[minIndex])
                minIndex = j;

        temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }

    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    return 0;
}
