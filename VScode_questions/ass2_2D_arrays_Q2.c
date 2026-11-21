#include <stdio.h>

int main()
{
    int n;
    int a[100][100];
    int symmetric = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i][j] != a[j][i])
            {
                symmetric = 0;
                break;
            }
        }

        if (!symmetric)
            break;
    }

    if (symmetric)
        printf("YES");
    else
        printf("NO");

    return 0;
}