#include <stdio.h>

int main() {
    int value = 25;
    int *ptr = &value;

    // ptr stores the memory address of value.
    printf("Value = %d\n", value);
    printf("Address = %p\n", (void *)ptr);
    printf("Value through pointer = %d\n", *ptr);

    return 0;
}
