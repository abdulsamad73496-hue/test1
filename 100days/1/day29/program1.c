//program..
#include<stdio.h>
int main()
{
int c, b,a[100],sum=0,count=0;
printf("enter no of element::");
scanf("%d", &b);
for (int i=0;i<b;i++)
     {  printf("no of element::");
        scanf("%d", &c);
        a[i]=c;
       count=count+1;
      }
for (int j=count-1;j>=0;j--)
     {sum=sum+a[j];}
printf("%d",sum);
return 0;
}

