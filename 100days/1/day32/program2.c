//digit that occur most time  in an integer no..
#include<stdio.h>
int main ()
{
int n,a[10]={0};
printf("enter no:");
scanf("%d", &n);
int rem ;
while (n>0)
   { rem=n%10;
     n=n/10;
    if (rem==0)
      {a[0]++;}
    else if (rem==1)
        {a[1]++;}
    else if (rem==2)
         {a[2]++;}
    else if (rem==3)
         {a[3]++;}
    else if (rem==4)
         {a[4]++;}
    else if (rem==5)
         {a[5]++;}
    else if (rem==6)
         {a[6]++;}
     else if (rem==7)
         {a[7]++;}
     else if (rem==8)
         {a[8]++;}
     else 
         {a[9]++;}
      }
int max=a[0];
int digit=0;
for (int i=0;i<10;i++)
      {if (max<a[i])
         { max=a[i];
           digit=i;}         
       }
printf("digit most time in the integer is%d",digit);
return 0;
}
