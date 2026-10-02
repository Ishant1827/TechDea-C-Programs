//WAP in C to check whether the entered number is positive or negative.

#include<stdio.h>
int main()
{
	int a;
	
	printf("Enter the Number: ");
	scanf("%d", &a);
	
	if (a>0)
	{
		printf("%d is Positive Number.", a);
	}
	
	else if (a==0)
	{
		printf("%d is Neutral Number.", a);
	}
	
	else 
	
	{
		printf("%d is Negative Number.", a );
	}
}
