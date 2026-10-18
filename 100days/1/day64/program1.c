#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int max = 0, count;

    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        count = 0;

        for (int j = i; s[j] != '\0'; j++)
        {
            int repeat = 0;

            for (int k = i; k < j; k++)
            {
                if (s[k] == s[j])
                {
                    repeat = 1;
                    break;
                }
            }

            if (repeat)
                break;

            count++;
        }

        if (count > max)
            max = count;
    }

    printf("%d", max);

    return 0;
}
