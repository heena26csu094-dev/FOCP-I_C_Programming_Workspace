#include <stdio.h>

int main()
{
    int n, i, j, mid;
    scanf("%d", &n);

    mid = (n + 1) / 2;

    for(i = 1; i <= mid; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        for(j = 1; j <= 2*(n-i)+1; j++)
        {
            printf(" ");
        }

        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(i = mid-1; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        for(j = 1; j <= 2*(n-i)+1; j++)
        {
            printf(" ");
        }

        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}