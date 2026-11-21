#include <stdio.h>

int main()
{
    int r, c;
    int a[100][100];
    int count = 0;

    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int peak = 1;

            // Up
            if (i > 0 && a[i][j] <= a[i - 1][j])
                peak = 0;

            // Down
            if (i < r - 1 && a[i][j] <= a[i + 1][j])
                peak = 0;

            // Left
            if (j > 0 && a[i][j] <= a[i][j - 1])
                peak = 0;

            // Right
            if (j < c - 1 && a[i][j] <= a[i][j + 1])
                peak = 0;

            if (peak)
                count++;
        }
    }

    printf("%d", count);

    return 0;
}