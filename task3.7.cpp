// Write a program in c to check given number is palindrome or not.

#include <stdio.h>
int main()
{
    int n, temp, rem, rev= 0;

    printf("Enter the Number: ");
    scanf("%d", &n);
    
	temp = n; 
	
    while(n > 0)

    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    
    if (rev == temp)
        printf("%d is a Palindrome Number.", temp);
    else
        printf("%d is not a Palindrome Number.", temp);

}
