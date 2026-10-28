#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000],b[1000];
    FILE *ptr;
    FILE *pt;
    int characters = 0, word = 0, line = 0, len;
    pt=fopen("info.txt", "a");
    fgets(b,sizeof(b),stdin);
    fprintf(pt ,"%s", b);
    fclose(pt);
    ptr = fopen("info.txt", "r");

    if (ptr == NULL)
    {
        printf("File not found");
        return 1;
    }

    while (fgets(a, sizeof(a), ptr) != NULL)
    {
        len = strlen(a);

        for (int i = 0; i < len; i++)
        {
            if (a[i] != ' ' && a[i] != '\n' && a[i] != '\t')
            {
                characters++;
            }

            if (a[i] == ' ' || a[i] == '\n' || a[i] == '\t')
            {
                if (i > 0 && a[i - 1] != ' ' &&
                    a[i - 1] != '\n' && a[i - 1] != '\t')
                {
                    word++;
                }
            }

            if (a[i] == '\n')
            {
                line++;
            }
        }

        if (len > 0 && a[len - 1] != '\n')
        {
            line++;
        }

        if (len > 0 && a[len - 1] != ' ' &&
            a[len - 1] != '\n' && a[len - 1] != '\t')
        {
            word++;
        }
    }

    printf("Characters = %d\n", characters);
    printf("Words = %d\n", word);
    printf("Lines = %d\n", line);

    fclose(ptr);
    return 0;
}

