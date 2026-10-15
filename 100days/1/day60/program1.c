#include<stdio.h>
int findmax(int a[],int start,int end);
int main ()
{
int  n;
printf("Enter the no  of  element:");
scanf("%d", &n);
int a[n];
printf("Enter no element:\n");
for (int i=0;i<n;i++)
   {
    scanf("%d", &a[i]);
   if (i<n-1)
      { char ch;
       scanf("%c", &ch);
       }
   }
int  k,start=0,end;
printf("Enter k=");
scanf("%d", &k);
if (k<=0||k>n)
  {
   printf("invalid window size");
  return 0;
   }
for (int i=0;i<=n-k;i++)
    {
     start=i;
     end=i+k-1;
     int max=findmax(a,start,end);
     printf("%d,",max);
     }
return 0;
}
int findmax(int a[],int start,int end)
   { 
    int no=a[start];
     for (int i=start;i<=end;i++)
          {
            if(no<a[i])
              {no=a[i];}
          }
       return no;
    }





