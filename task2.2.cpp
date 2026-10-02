//WAP in C to find whether a number is odd or even.

#include<stdio.h>
int main()
{
	int a;
	
	printf("Enter the Number: ");
	scanf("%d", &a);
	
	if (a%2==0)
	{
		printf("%d is EVEN.", a);
	}
	
	else 
	
	{
		printf("%d is ODD", a );
	}
}
