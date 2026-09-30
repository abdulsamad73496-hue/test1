//printf initial  of a name..
#include<stdio.h>
#include<string.h>
int main ()
{
int n,i=0;
printf("Enter how many char:");
scanf("%d", &n);
char  a[n+1];
getchar ();
fgets(a,sizeof(a),stdin);
printf("%c,", a[i]);
for ( ;i<=strlen(a);i++)
    {
      if (a[i]==' '||a[i]=='\n')
         {printf("%c", a[i+1]);}
      }
return  0;
}
