#include<stdio.h>
int main ()
{
int n;
printf("Enter how intger you have to  input ");
scanf("%d", &n);
int a[n];
for (int i=0;i<n;i++)
    {
    scanf("%d", &a[i]);
    }
int s;
printf("Enter which no you have to check:");
scanf("%d", &s);
int count=0;
for (int i=0;i<n;i++)
    {
    if (a[i]==s)
       {
        count=count+1;
        }
    }
float k;
k=n/2;
if (n>count)
   {printf("%d", s);}
else 
    {printf("-1");}
return 0;
} 

   
        
