#include <stdio.h>

int main() {
    FILE *fp;

    // Open a file in write mode. It will be created if it does not exist.
    fp = fopen("data.txt", "w");

    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    fprintf(fp, "C Programming File Handling\n");
    fprintf(fp, "This line was written from a C program.\n");

    fclose(fp);
    printf("Data written successfully.\n");

    return 0;
}
