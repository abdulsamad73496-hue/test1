//revserse the string...
#include<stdio.h>
#include<string.h>
int main ()
{
int  n;
printf("how much char in your string");
scanf("%d",&n);
char a[n+1];
for (int i=0;i<n;i++)
    {
      scanf(" %c", &a[i]);                  ;
     }
a[n]='\0';
int l;
l=strlen(a)-1;
char b[n+1];
for (int i=0;i<n;i++)
    {
     b[i]=a[l];
     l--;
     }

if  (strcmp(a,b)==0)
   {printf("palindrome");}
else 
    {printf("not palindrome");}
return 0;
}

