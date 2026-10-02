// WAP in C to find max number from two numbers using ternary operator.

#include<stdio.h>
int main()
{
	int i,s;
	printf("Enter the First Number:");
	scanf("%d", &i);
	
	printf("Enter the Second Number:");
	scanf("%d", &s);
	
	i>s? printf("First Number is Maximum"): printf("Second Number is Maximum");
}
