// WAP in C to print the weekday according to the day number using the switch case.
#include<stdio.h>
int main()
{
	char day;
	
	printf("Enter Day Number (1-7) : ");
	scanf("%c", &day);
	
	switch(day)
	{
		case '1':
			printf("Sunday");
			break;
		case '2':
			printf("Monday");
			break;
		case '3':
			printf("Tuesday");
			break;
		case '4':
			printf("Wednesday");
			break;
		case '5':
			printf("Thursday");
			break;
		case '6':
			printf("Friday");
			break;
		case '7':
			printf("Saturday");
			break;
		default:
			printf("Invaild Day");
	}
	
}
