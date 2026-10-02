// WAP in C to display an inverted half pyramid number pattern (decreasing order).

#include <stdio.h>
int main()
{
    int i, j;

    for(i = 5; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
