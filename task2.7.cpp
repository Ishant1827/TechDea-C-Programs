// WAP in C to find the greatest number among four numbers using the ternary operator.

#include<stdio.h>
int main()
{
	int a,b,c,d, max;
	
	printf("Enter Four Numbers(with only space): ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	max=(a>b) ? a:b;
	max=(max>c) ? max:c;
	max=(max>d) ? max:d;

	printf("Greatest Number is %d", max);
	
	
}
