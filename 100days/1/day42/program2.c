//lowercase string to uppercase ...
#include<stdio.h>
int main ()
{
int n;
printf("How many char you have to input ");
scanf("%d",&n);
char a[n];
for (int i=0;i<n;i++)
    {scanf(" %c", &a[i]);}
for (int k=0;k<n;k++)
     {if  (a[k]>='a' && a[k]<='z')
       {
         a[k]=a[k]-32;
         printf("%c", a[k]);
       }
     else 
        {printf("%c",a[k]);}
      }
return 0;
}
