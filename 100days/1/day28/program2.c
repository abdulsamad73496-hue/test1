//read and print the array of  1D
#include<stdio.h>
int main()
{
int n,a[100],count=0,b;
printf("enter how many no you have to input in array:");
scanf("%d", &n);
for (int i=0;(i<=(n-1));i++)
     {  printf("enter no::");
      scanf("%d", &a[i]);
      count++;
      }
for (int j=(count-1);j>=0;j--)
     { b=a[j];
      printf("%d,",  b);
     }
return 0;
}
