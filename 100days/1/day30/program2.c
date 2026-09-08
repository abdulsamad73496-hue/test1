//program to count negative,postive and zero..
#include<stdio.h>
int main()
{
int  n,i,a[100],count=0,positive=0,negative=0,zero=0;
printf("No:");
scanf("%d" , &n);
for (i=0 ;i<n;i++)
    {
     count++;
     printf("enter integer:");
     scanf("%d", &a[i]);
     }
for (int j=count-1;j>=0;j--)
    {
     if (a[j]>0)
        {positive=positive+1;}
      else if (a[j]==0)
         {zero=zero+1;}
      else 
         {negative=negative+1;}
         }       
printf("Positive:%d\n Negative:%d\n zero:%d",positive,negative,zero);
return 0;
}

