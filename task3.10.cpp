// WAP in C to print Even number up to given number.

#include <stdio.h>
int main()

{
    int n, i;

    printf("Enter the Number: ");
    scanf("%d", &n);
    
    printf("Even numbers are:\n");
    
	  for(i = 2; i <= n; i = i + 2)
	  
	  {
	  	printf("%d  ", i);
	  }
}
