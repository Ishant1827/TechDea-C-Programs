#include <stdio.h>

int main() {
    char a[200], b[200];
    int i = 0, equal = 1;

    printf("Enter first string: ");
    fgets(a, sizeof(a), stdin);
    printf("Enter second string: ");
    fgets(b, sizeof(b), stdin);

    // Compare characters until a difference or the string end is reached.
    while (a[i] != '\0' || b[i] != '\0') {
        if (a[i] == '\n' && b[i] == '\n') break;
        if (a[i] != b[i]) {
            equal = 0;
            break;
        }
        i++;
    }

    printf("%s\n", equal ? "Equal" : "Not Equal");
    return 0;
}
