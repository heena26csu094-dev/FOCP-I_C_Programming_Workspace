#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int n;
    int a[1000];
    int min = INT_MAX;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int diff = abs(a[i] - a[j]);

            if (diff < min)
                min = diff;
        }
    }

    printf("%d", min);

    return 0;
}