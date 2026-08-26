//program to  convert decimal into binary
#include<stdio.h>
int main ()
{
int  n,bin[100],i=0,rem=0;
printf("enter the decimalno ");
scanf("%d",&n);
if (n==0)
  {printf(" the binary equalivalent is 0:");
  }
else
  {
   while (n>0)
    {
      rem=n%2;
      bin[i]=rem;
      n=n/2;
      i++;
       }
    }
for (int j=i-1;j>=0;j--)
    {
    printf("%d" ,bin[j]);
    }
return 0;
}
