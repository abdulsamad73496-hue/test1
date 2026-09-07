//max and min  element in an array...
#include<stdio.h>
int main()
{
int i,j,a[100],n,c,count=0,max,min;
printf("enter the no of element::");
scanf("%d", &n);
for (i=0;i<n;i++)
     {  printf("enter the element::");
        scanf("%d", &c);
       a[i]=c;
       count=count+1;
       }
max=a[0];
min=a[0];
for(j=count-1;j>=0;j--)
    {
      if (max<a[j])
          { max=a[j];}
      }
printf("max no in array::%d\n" ,max);
for(int k=count-1;k>=0;k--)
    {
       if (min>a[k])
           {min=a[k];}
     }
printf("min no in array::%d", min);
return 0;
}
     
