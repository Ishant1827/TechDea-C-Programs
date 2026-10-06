#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    // A character is stored internally using an integer ASCII value.
    printf("ASCII value of %c = %d\n", ch, ch);
    return 0;
}
