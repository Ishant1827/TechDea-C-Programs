// WAP to illustrate the use of strlen() function.

#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    printf("Length of string = %lu", strlen(str));
}
