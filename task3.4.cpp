// Write a program in c to find the factorial of given number.

#include <stdio.h>
int main()
{
    int n, i=1, fact=1;

    printf("Enter the Number: ");
    scanf("%d", &n);
    
    while (i<=n)
    
    {
    	fact=i*fact;
    	i++;
    }
    
    printf("Factorial of %d is: %d",n, fact);
    return 0;
    
}
