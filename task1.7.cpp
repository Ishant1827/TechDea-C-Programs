// WAP in C to calculate average of three numbers.

#include<stdio.h>
int main()
{
	int i,k,s;
	printf("Enter the First Number:");
	scanf("%d", &i);
	
	printf("Enter the Second Number:");
	scanf("%d", &k);
	
	printf("Enter the Third Number:");
	scanf("%d", &s);
	
	int average=(i+k+s)/3;
	printf("Average of the Number is: %d", average);
}
