#include <stdio.h>

int main()
{
    int r, c;
    int a[100][100];
    int found = 0;

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
            int rowMin = 1;
            int colMax = 1;

            // Check minimum in row
            for (int k = 0; k < c; k++)
            {
                if (a[i][j] > a[i][k])
                    rowMin = 0;
            }

            // Check maximum in column
            for (int k = 0; k < r; k++)
            {
                if (a[i][j] < a[k][j])
                    colMax = 0;
            }

            if (rowMin && colMax)
            {
                printf("%d %d %d", i, j, a[i][j]);
                found = 1;
                break;
            }
        }

        if (found)
            break;
    }

    if (!found)
        printf("None");

    return 0;
}