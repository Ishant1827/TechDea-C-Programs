//WAP in C to check whether the entered year is a leap year or not.


#include<stdio.h>
int main()
{
	int a;
	
	printf("Enter the Year: ");
	scanf("%d", &a);
	
	if (a%4==0)
	{
		printf("%d is Leap Year.", a);
	}
	
	else 
	
	{
		printf("%d is not a Leap Year", a );
	}
}
