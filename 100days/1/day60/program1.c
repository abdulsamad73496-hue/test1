
#include <stdio.h>

int main()
{
    int n;
    printf("Enter how many elements you have to input: ");
    scanf("%d", &n);

    int a[n], b[n], c[n], flag = 0;

    printf("Enter elements:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int k, count = 0;
    scanf("%d", &k);

    for (int j = 0; j <= n - k; j++)
    {
        flag = a[j];

        for (int i = j + 1; i < j + k; i++)
        {
            if (a[i] > flag)
            {
                flag = a[i];
            }
        }

        b[count] = flag;
        count++;
    }

    for (int i = 0; i < count; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}

