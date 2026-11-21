#include <stdio.h>

long long area(long long length, long long width)
{
    return length * width;
}

int main()
{
    long long length, width;

    scanf("%lld %lld", &length, &width);

    printf("%lld", area(length, width));

    return 0;
}