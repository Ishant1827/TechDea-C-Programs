// WAP in C to convert temperature in Celsius from Fahrenheit.
// C= (F – 32 ) x 5/9 

#include<stdio.h>
int main()
{
	float fahrenheit;
	printf("Enter the tempreture in Fahrenheit:");
	scanf("%f", &fahrenheit);
	
	float celsius =((fahrenheit-32)*5/9);
	printf("Tempreture in Celsius is: %f", celsius);
}
