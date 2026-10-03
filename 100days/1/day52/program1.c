//DAY 52..
#include<stdio.h>
int main ()
{
int n;
printf("Enter how many integer you have to input:\n");
scanf("%d", &n);
int a[n];
printf("enter integer :\n");
while(getchar()!='\n');
for (int i=0;i<n;i++)
    {
    scanf("%d,", &a[i]);
    }
int temp;
for (int i=0;i<n-1;i++)
   {
    for (int j=0;j<(n-i-1);j++)
        {
         if (a[j]>a[j+1])
           {  
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
            }
        }
   }
int x,frist=-1;
printf( "Enter  which you element you have to check for program:");
scanf("%d", &x);
for (int i=0;i<n;i++)
    {
      if (a[i]>=x)
        {
         frist=i;
         break;
        }
     }

if (frist==-1)
    {
     printf("NO ELEMENT IS GREATER THEN %d IS FOUND:", x);
    }
else
   {
   printf("%d", frist);
   }
return 0;
}












