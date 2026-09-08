//count even and odd number..
#include<stdio.h>
int main()
{
int n,a[100],i,count=0,s,even=0,odd=0;
printf("how many  no you have to  input? enter :");
scanf("%d", &n);
for (i=0;i<n;i++)
    {
     printf("enter no:");
     scanf("%d", &a[i]);
     count++;
      }
for(int j=count-1;j>=0;j--)
    {
     s=a[j];
     if (s%2==0)
       { even=even+1;}
    else 
       {odd=odd+1;}
    }
printf("even:%d\n",even);
printf("odd:%d",odd);
return 0;
}
