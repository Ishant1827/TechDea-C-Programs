#include <stdio.h>

int main() {
    int n, i, key, found = -1;
    int a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter value to search: ");
    scanf("%d", &key);

    // Compare the search key with every array element.
    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            found = i;
            break;
        }
    }

    if (found != -1)
        printf("Found at index %d\n", found);
    else
        printf("Not found\n");

    return 0;
}
