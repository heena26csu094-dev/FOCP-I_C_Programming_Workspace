#include <stdio.h>

int main()
{
    int n;
    int a[1000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int current = 1;
    int best = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
            current++;
        else
            current = 1;

        if (current > best)
            best = current;
    }

    printf("%d", best);

    return 0;
}