//Count  frequency  0f a given  character in a string..
#include<stdio.h>
int main ()
{
int  count=0,n;
printf("Enter the size of string:");
scanf("%d\n", &n);
char a[n];
printf("Enter string\n");
for (int i=0;i<=n;i++)
    {scanf("%c", &a[i]);}
char r;
printf("Enter char that you went to find:");
scanf("%c", &r);
for (int i =0;i<=n;i++)
     {if (a[i]==r)
         {count=count+1;}
      }         
if (count!=0)
   {printf("%d", count);}
else 
   {printf("not found");}
return 0;
}
