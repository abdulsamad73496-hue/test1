//print initials of a name with the surname displayed in full..
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("Enter the char:");
    scanf("%d", &n);

    char a[n+1], b[100];
    getchar();

    fgets(a, sizeof(a), stdin);

    printf("%c,", a[0]);

    for (int i = 0; i <= strlen(a); i++)
    {
        if (a[i] == ' ' && strchr(a + i + 1, ' ') != NULL)
        {
            printf(" %c,", a[i + 1]);
        }

        if (a[i] == ' ' && strchr(a + i + 1, ' ') == NULL)
        {
            for (int k = i + 1; k <= strlen(a) - 1; k++)
            {
                printf("%c", a[k]);
            }
        }
    }

    return 0;
}
                 
     
