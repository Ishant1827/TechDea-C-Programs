// WAP in C to check whether a character is a vowel or a consonant.

#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter the Alphabet:");
	scanf("%c", &ch);
	
	if 
	(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'|| 
		ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
		
	{
		printf("%c is Vowel.", ch);
	}
	
	else if( (ch>='A' && ch<='Z') || (ch>='a' && ch<='z') )
	{
		printf("%c is Consonant.", ch);
	}
	
	else 
	
	{
		printf("Invaild Input.");
	}
}
