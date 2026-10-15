#include<stdio.h>
int  array(int a[], int start, int end);
int main ()
{
int n;
printf("Enter  how many no you have to input :");
scanf("%d", &n);
int a[n];
printf("Enter intger:");
for (int i=0;i<n;i++)
   {
    scanf("%d", &a[i] );
     if (i<n-1)
       {getchar();}
   }
int k;
printf("Enter k:");
scanf("%d", &k);
int start=0,end=k-1;
for (int i=0;i<=n-k;i++)
    {
     start=i;
     end=i+k-1;
    int subarr=array( a, start,  end);
     printf("%d,", subarr);
    }
return 0;
}
int array(int a[],int start,int end)
      {
        for (int i=start;i<=end;i++)
         {
             if (a[i]<0)
                 {
                  return a[i];
                 }
          }
      return 0;
         }
            
