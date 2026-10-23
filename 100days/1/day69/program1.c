#include<stdio.h>
int main ()
{
int n;
printf("Enter the no of element :");
scanf("%d", &n);
int a[n],temp;
for (int i=0;i<n;i++)
    {
     scanf("%d", &a[i]);
      if(i<n-1)
       {getchar();} 
    }
for(int i=0;i<n-1;i++)
   {
    for (int j=0;j<n-i-1;j++)
        {
           if (a[j]>a[j+1])
            {
             temp=a[j+1];
             a[j+1]=a[j];
             a[j]=temp;
            }
         }
    }
for (int i=0;i<n;i++)
    {
     if(a[i]!=i)
      {
       printf("%d",i);
       break;
      }
    }
return 0;
}
