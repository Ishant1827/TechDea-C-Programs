#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    // A function pointer stores the address of a function.
    int (*operation)(int, int) = add;

    printf("Result = %d\n", operation(10, 20));
    return 0;
}
