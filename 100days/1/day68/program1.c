#include<stdio.h>
int main ()
{
int n,k;
printf("Enter the no of element:");
scanf("%d", &n);
int a[n],flag=0;
for (int i=0;i<n;i++)
   {
    scanf("%d", &a[i]);
       if(i<n-1)
      {getchar();}
    for (int j=0;j<i;j++)
        {if(a[i]==a[j])
          {
           flag=1;
           k=a[i];
           break;
          }
        }
     }
if (flag==0)
  {printf("No occurence ");}
else 
  {printf("%d", k);}
return 0;
}
