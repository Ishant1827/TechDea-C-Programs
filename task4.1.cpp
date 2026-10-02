//  WAP to find the largest and smallest element in an array.

#include <stdio.h>
int main()
{
    int a[100], n, i, max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = min = a[0];

    for(i = 1; i < n; i++)
	{
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }

    printf("Largest Number = %d\n", max);
    printf("Smallest Number = %d", min);
}
