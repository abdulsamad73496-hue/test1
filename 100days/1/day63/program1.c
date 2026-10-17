#include<stdio.h>
int main ()
{
int n;
printf("Enter n:");
scanf("%d", &n);
int a[n];
for (int i=0;i<n;i++)
    { 
      scanf("%d",  &a[i]);
         if (i<n-1)
            {getchar();}             
     }
int tem=0;
for (int i=0;i<n;i++)
    {
     for (int j=0;j<n-i-1;i++)
         {
          if (a[j]>a[j+1])
            { 
              tem=a[j];
              a[j]=a[j+1];
              a[j+1]=tem;
             }
          }
      }
int k;
printf("Enter the value of k:");
scanf("%d", &k);
     {
      printf("%d", a[k-2]);
     }
return 0;
} 
