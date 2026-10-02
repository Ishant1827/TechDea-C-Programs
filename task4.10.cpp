// WAP to illustrate the use of strrev() function.

#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    printf("Reversed string = %s", strrev(str));
}
