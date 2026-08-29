//program to find the sum of digit  of a number ..
#include<stdio.h>
int main()
{
int  no,i,sum=0,n ;
printf("enter the no");
scanf("%d" , &no);
while(no>0)
{
  n=no%10;
  sum=sum+n;
  no=no/10;
}
printf("sum:%d",sum);
return 0 ;
}

