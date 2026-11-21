#include <stdio.h>

int main()
{
    char s[1000];

    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int spaces = 0;

    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++)
    {
        char ch = s[i];

        if (ch >= '0' && ch <= '9')
            digits++;

        else if (ch == ' ')
            spaces++;

        else if ((ch >= 'A' && ch <= 'Z') ||
                 (ch >= 'a' && ch <= 'z'))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' ||
                ch == 'O' || ch == 'U')
                vowels++;

            else
                consonants++;
        }
    }

    printf("%d %d %d %d",
           vowels, consonants, digits, spaces);

    return 0;
}