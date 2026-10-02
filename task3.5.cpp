// Write a program in c to sum of digits of a given number.

#include <stdio.h>
int main()
{
    int n, rem, sum= 0;

    printf("Enter the Number: ");
    scanf("%d", &n);

    while(n > 0)

    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("Sum of digits is %d.", sum);
    
}
