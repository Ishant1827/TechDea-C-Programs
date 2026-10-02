// WAP in C to Swap the Values of Two Variables Using a Third Variable.

#include<stdio.h>
int main()
{
	int i,k,s;
	printf("Enter the First Digit:");
	scanf("%d", &i);
	
	printf("Enter the Second Digit:");
	scanf("%d", &k);
	
	s=i;
	i=k;
	k=s;
	
	printf("After Swapping:\n");
    printf("First Number = %d\n", i);
    printf("Second Number = %d", k);
}
