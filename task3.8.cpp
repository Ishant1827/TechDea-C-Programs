// Write a program in c to check given number is prime number or not.

#include <stdio.h>
int main()
{
    int n, i;

    printf("Enter the Number: ");
    scanf("%d", &n);
    
	  for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            printf("%d is Not a Prime Number.", n);
            return 0;
        }
    }

    if(n > 1)
        printf("%d is a Prime Number.", n);
    else
        printf("%d is Not a Prime Number.", n);
}
