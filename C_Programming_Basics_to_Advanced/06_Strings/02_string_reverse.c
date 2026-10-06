#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    // Print characters from the last position to the first.
    printf("Reverse = ");
    for (i = (int)strlen(str) - 1; i >= 0; i--)
        putchar(str[i]);

    printf("\n");
    return 0;
}
