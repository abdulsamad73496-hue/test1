//longest word in a sentences..
#include <stdio.h>
#include <string.h>

int main()
{
 char a[100];
 int count = 0, max = 0;
 int start = 0, maxstart = 0;

 printf("Enter the sentence:\n ");
 fgets(a, sizeof(a), stdin);

 for(int i = 0; i <= strlen(a); i++)
  {
      if(a[i] != ' ' && a[i] != '\n' && a[i] != '\0')
        {
            count++;
        }
        else
        {
            if(count > max)
            {
                max = count;
                maxstart = i - count;
            }

            count = 0;
        }
    }

    printf("Longest word: ");

    for(int i = maxstart; i < maxstart + max; i++)
    {
        printf("%c", a[i]);
    }

    return 0;
}
