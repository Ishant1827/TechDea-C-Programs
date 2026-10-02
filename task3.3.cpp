// Write a program in c to make a table of a given number.

#include <stdio.h>
int main()
{
    int n, i=1, table;

    printf("Enter the Number: ");
    scanf("%d", &n);
    
    printf("Table of %d is:\n",n);

    while(i<=10)

    {
        table=n*i;
        printf("%d*%d=%d\n",n, i, table);
        i++;
    }
    
}
