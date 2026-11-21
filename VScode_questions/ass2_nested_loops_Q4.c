#include <stdio.h>

int digitSum(int n)
{
    int sum = 0;

    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main()
{
    int n;
    int a[1000];
    int count = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (digitSum(a[i]) == digitSum(a[j]))
                count++;
        }
    }

    printf("%d", count);

    return 0;
}