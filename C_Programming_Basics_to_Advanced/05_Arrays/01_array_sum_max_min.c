#include <stdio.h>

int main() {
    int n, i, sum = 0, max, min;
    int a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    max = min = a[0];

    // Traverse the array once to calculate sum, maximum and minimum.
    for (i = 0; i < n; i++) {
        sum += a[i];
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }

    printf("Sum = %d\nAverage = %.2f\nMax = %d\nMin = %d\n",
           sum, (float)sum / n, max, min);

    return 0;
}
