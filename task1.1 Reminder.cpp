// WAP in C to perform mathematical operations using arithmetic operators.
// Reminder

#include<stdio.h>
int main()
{
	int i,s;
	printf("Enter First Number:");
	scanf("%d",&i);
	
	printf("Enter Second Number:");
	scanf("%d",&s);
	
	int Reminder=(i%s);
	printf("The Reminder of both Nummbers is: %d",Reminder);
	
}
