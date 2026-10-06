#include <stdio.h>
#include <string.h>

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline added by fgets, if present.
    str[strcspn(str, "\n")] = '\0';

    printf("Length = %zu\n", strlen(str));
    return 0;
}
