//WAP in C to find the greatest number among three numbers.

#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter Three Numbers(with only space): ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a>b && a>c)
	{
		printf("Greatest Number is %d", a);
	}
	
	else if (b>a && b>c)
	{
		printf("Greatest Number is %d", b);
	}
	
	else 
	
	{
		printf("Greatest Number is %d", c);
	}
}
