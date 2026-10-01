//print all sub-string of a string..
#include<stdio.h>
#include<string.h>
int main   ()
{
int n;
printf("Enter how many char:");
scanf("%d", &n);
char a[n+1];
getchar();
fgets(a,sizeof(a),stdin);
for (int i=0;i<strlen(a);i++)
     { 
           for (int k=i;k<strlen(a);k++)
               {
                  for (int j=i;j<=k;j++)
                    {
                      printf("%c", a[j]);
                    }
      printf(",");
       }
     }
return 0;
}
