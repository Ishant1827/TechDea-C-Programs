// WAP in C to perform mathematical operations using the switch case.

#include<stdio.h>
int main()
{
	int a,b;
	char operators;
	
	printf("Enter First Number : ");
	scanf("%d", &a);
	printf("Enter the Operator(+,-,*,/,%) : ");
	scanf(" %c", &operators);
	printf("Enter Second Number : ");
	scanf("%d", &b);
	
	switch(operators)
	{
		case '+':
			printf("The Sum of %d and %d is: %d ", a, b, a+b);
			break;
		case '-':
			printf("The Difference of %d and %d is: %d ", a, b,  a-b);
			break;
		case '*':
			printf("The Product of %d and %d is: %d ", a, b, a*b);
			break;
		case '/':
			printf("The Quotient of %d and %d is:%d  ", a, b, a/b);
			break;
		case '%':
			printf("The Reminder of %d and %d is:%d ", a, b, a%b);
			break;
		default:
			printf("Invaild Operator");
	}
	
}
