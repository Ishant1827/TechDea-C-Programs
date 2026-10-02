// WAP in C to input student name and roll number and print  Student  name and roll number.

#include<stdio.h>
int main()
{
	char name[20];
	int s;
	
	printf("Enter Your Name:");
	scanf("%s", name);
	
	printf("Enter Your Roll Number:");
	scanf("%d", &s);
	
	printf("Student's Name is: %s \n", name);
	printf("Studnet's Roll Number: %d", s);
}
