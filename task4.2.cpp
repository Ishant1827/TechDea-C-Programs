// WAP to find the sum of array elements.

#include <stdio.h>
int main()
{
    int arr[100], n, i, sum=0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
		 sum += arr[i];
	}

    printf("Sum of elements in array = %d", sum);
}
