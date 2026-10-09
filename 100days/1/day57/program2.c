//program..
#include<stdio.h>
int main ()
{
int n;
printf("Enter how many no you have to input:");
scanf("%d", &n);
int a[n];
for (int i=0;i<n;i++)
{
scanf("%d ", &a[i]);
}
for (int i=0;i<n;i++)
  {
   if  (a[i+1]<a[i])
      {printf("%d", a[i]);}
    else 
       {printf("%d", -1);}
   }
return 0;
}


