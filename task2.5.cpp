// WAP in C to check whether an entered character is uppercase or lowercase.

#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter the Character: ");
	scanf("%c", &ch);
	
	if (ch>='A' && ch<='Z')
	{
		printf("%c is Uppercase Letter.", ch);
	}
	
	else if (ch>='a' && ch<='z')
	{
		printf("%c is Lowercase Letter", ch);
	}
	
	else
	{
		printf("Entered Value is not an Alphabet.");
	}
}
