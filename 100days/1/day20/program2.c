//program to find the 1's complement of a  binary nuumber  and  print it..
#include<stdio.h>
int main()
{
int i=0, n1,n2,a[100],n;
printf("enter n1:");
scanf("%d", &n1);
while (n1>0)
{
    n2=n1%2; 
    n1=n1/2;
    a[i]=n2;
    i=i+1;
}
printf("complement:");
for (int j=i-1;j>=0;j--)
    {
       n=1-a[j];
      printf("%d",n );
     }
return 0;
}
