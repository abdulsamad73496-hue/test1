//logic enharence..
#include<stdio.h>
int main ()
{
int n,tem;
printf("Enter how many no you have to input :\n");
scanf("%d", &n);
int nums[n];
printf("enter number:\n");
for ( int i=0;i<n;i++)
     {scanf("%d", &nums[i]);}
int temp;
for (int i=0;i<(n-1);i++)
    {
     for (int k=0;k<(n-i-1);k++)
        {
          if (nums[k]>nums[k+1])
             {  tem=nums[k];
                nums[k]=nums[k+1];
                nums[k+1]=temp;
              }
        }
     }
int   target,frist=-1,last=-1;
printf("Target=");
scanf("%d", &target);
for (int j=0;j<n;j++)
   {
    if   (nums[j]==target)
       {
         if (frist==-1)
           {
             frist=j;
           }
       last=j;
       }
    }
printf("%d,%d", frist,last);
return 0;
}

