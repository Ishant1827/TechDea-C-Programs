#include <stdio.h>

// Swap two variables by modifying their original memory locations.
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    swap(&a, &b);

    printf("After swapping: %d %d\n", a, b);
    return 0;
}
