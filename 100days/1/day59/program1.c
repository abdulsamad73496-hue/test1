#include<stdio.h>
int main ()
{
int n;
printf("Enter a element:");
scanf("%d", &n);
int a[n];
for (int i=0;i<n;i++)
   {scanf("%d", &a[i]);
       if(i<n-1)
       { getchar();}
   }
int  temp,ram[100],sum=0,count=0;
printf("Enter how many consecutive integr you have to take:");
scanf("%d", &temp);
if(temp==0)
    {return 0;}
for (int i=0;i<=(n-temp);i++)
    {for (int j=i;j<(i+temp);j++)
         { sum=sum+a[j];}
         ram[count]=sum;
         count=count+1;
         sum=0;
    }
int max;
max=ram[0];
for (int i=0;i<count;i++)
    { if(max<ram[i])
        {max=ram[i];}
    }
printf("%d", max);
return 0;
}

