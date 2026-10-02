// WAP in C to display a half pyramid star pattern (decreasing order).

#include <stdio.h>
int main()
{
    int i, j;

    for(i = 5; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
