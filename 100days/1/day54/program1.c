#include <stdio.h>

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int x, sum1, sum2;

    for (x = 1; x <= n; x++)
    {
        sum1 = 0;
        sum2 = 0;

        for (int i = 1; i <= x; i++)
        {
            sum1 = sum1 + i;
        }

        for (int i = x; i <= n; i++)
        {
            sum2 = sum2 + i;
        }

        if (sum1 == sum2)
        {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");

    return 0;
}
