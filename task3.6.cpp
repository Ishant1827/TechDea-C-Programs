// Write a program in c to check Armstrong number or not.

#include <stdio.h>
int main()
{
    int n, temp, rem, sum= 0;

    printf("Enter the Number: ");
    scanf("%d", &n);
	temp = n; 
	
    while(n > 0)

    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }
    
    if (sum == temp)
        printf("%d is an Armstrong Number.", temp);
    else
        printf("%d is not an Armstrong Number.", temp);

}
