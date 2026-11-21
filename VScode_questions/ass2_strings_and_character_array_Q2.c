#include <stdio.h>

int main()
{
    char s[1000];

    scanf("%999s", s);

    int count = 1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
        else
        {
            printf("%c%d", s[i], count);
            count = 1;
        }
    }

    return 0;
}