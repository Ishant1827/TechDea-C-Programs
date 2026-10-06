#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a;
    int i;

    // Array name points to its first element in most expressions.
    for (i = 0; i < 5; i++)
        printf("%d ", *(p + i));

    printf("\n");
    return 0;
}
