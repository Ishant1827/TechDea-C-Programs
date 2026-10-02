// WAP in C to display the result of a student using the switch case.

#include<stdio.h>
int main()
{
	char grade;
	
	printf("Enter Grade (A,B): ");
	scanf("%c", &grade);
	
	switch(grade)
	{
		case 'A':
			printf("Pass");
			break;
		case 'B':
			printf("Fail");
			break;
		default:
			printf("Invaild Grade");
	}
	
}
