// WAP in C to swap the value of two variable without help of third variable.

#include<stdio.h>
int main()
{
	int i,k,s;
	printf("Enter the First Digit:");
	scanf("%d", &i);
	
	printf("Enter the Second Digit:");
	scanf("%d", &k);
	
 	i = i + k;
    k = i - k;
    i = i - k;
	
	printf("After Swapping:\n");
    printf("First Number = %d\n", i);
    printf("Second Number = %d", k);
}
