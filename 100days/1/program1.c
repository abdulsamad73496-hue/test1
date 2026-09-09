//search for an element in an array using  linear search..
#include<stdio.h>
int main ()
{
int a[100],n,b,temp;
printf("How many element you have to input:");
scanf("%d", &n);
for (int i=1;i<n;i++)
   {
   printf("enter no:");
   scanf("%d", &a[i]);
   }
printf("\n enter  which element you have to search?");
scanf("%d", &b);
for (int i=1;i<n;i++)
    {
    if (a[i]==b)
      {temp=a[i];}
     }
if (temp==b)
   {printf("element exist");}
else 
   {printf("element not exist");}
return 0;
}
