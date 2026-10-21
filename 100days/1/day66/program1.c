#include<stdio.h>
int main ()
{
int n;
printf("Enter no element:'");
scanf("%d", &n);
int a[n];
for (int i=0;i<n;i++)
    {scanf("%d", &a[i]);
      if(i<n-1)
        {getchar();}
    }
int target,sum=0,flag=0;
scanf("%d", &target);
for (int i=0;i<n;i++)
    {for (int j=i+1;j<n;j++)
        { sum=a[i]+a[j];
          if(sum==target)
            {printf("%d,%d", i,j);flag=1;}
        }
    }
if (flag==0)
   {printf("-1,-1");}
return 0;
}
