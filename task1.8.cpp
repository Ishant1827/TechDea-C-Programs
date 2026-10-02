// WAP in C to calculate simple interest.

#include<stdio.h>
int main()
{
	int p,r,t;
	printf("Enter the Principle Ammount:");
	scanf("%d", &p);
	
	printf("Enter the rate of interest:");
	scanf("%d", &r);
	
	printf("Enter the the time of loan:");
	scanf("%d", &t);
	
	int interest=(p*r*t)/100;
	printf("Simple interest is: %d", interest);
}
