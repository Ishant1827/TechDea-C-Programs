// Write a program in c generate Fibonacci series up to given number.

#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, next;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Fibonacci Series : ");

    for(; a <= n;)
    {
        printf("%d ", a);

        next = a + b;
        a = b;
        b = next;
    }
}
