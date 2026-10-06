#include <stdio.h>

int main() {
    FILE *fp;
    int ch;

    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("Unable to open file. Run the write program first.\n");
        return 1;
    }

    // Read one character at a time until EOF.
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);

    fclose(fp);
    return 0;
}
