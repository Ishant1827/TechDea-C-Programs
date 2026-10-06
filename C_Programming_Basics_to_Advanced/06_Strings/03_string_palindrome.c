#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int left, right, palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    left = 0;
    right = (int)strlen(str) - 1;

    // Compare characters from both ends moving toward the center.
    while (left < right) {
        if (str[left] != str[right]) {
            palindrome = 0;
            break;
        }
        left++;
        right--;
    }

    printf("%s\n", palindrome ? "Palindrome" : "Not a Palindrome");
    return 0;
}
