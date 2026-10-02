// Write a program in c to reverse the digit of a given number.
//Extract the last digit: (rem = N mod 10)
//Append to reversed number: (Reverse = (Reverse*10) + rem)
//Remove the last digit from the original number: (N = (N-rem)/10 )

#include <stdio.h>
int main()
{
    int n, rev= 0;

    printf("Enter the Number: ");
    scanf("%d", &n);

    while(n > 0)

    {
        rev=(n%10)+rev*10;
        n=n/10;
    }
    printf("Reverse Number of given Number is %d.", rev);
}
