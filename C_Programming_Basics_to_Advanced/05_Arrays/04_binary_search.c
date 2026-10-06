#include <stdio.h>

int main() {
    int n, i, key, low, high, mid, found = -1;
    int a[100];

    printf("Enter number of sorted elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter value to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    // Binary search repeatedly halves the search interval.
    while (low <= high) {
        mid = low + (high - low) / 2;

        if (a[mid] == key) {
            found = mid;
            break;
        } else if (a[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found != -1)
        printf("Found at index %d\n", found);
    else
        printf("Not found\n");

    return 0;
}
