//insert an element in an array at a given position 
#include<stdio.h>
int main()
{
int a[100],n1,b[100];
printf("How many element you have to input?");
scanf("%d",&n1);
for (int i=0;i<n1;i++)
  {
   printf("Enter the element:");
   scanf("%d",&a[i]);
   }
for (int i=0;i<n1;i++)
    { b[i]=a[i];
      printf("%d,",a[i]);
      a[i]=0;     }
printf("\n");
 printf("Enter in which position you have to input new number:");
 int k;
 scanf("%d",&k);
int count=0;
for (int i=0;i<n1;i++)
    { 
        if (i==k)
       { printf("Enter new element:");
       scanf("%d",&a[k]);
       int r=i+1;
       a[r]=b[i];
       break; }
     else
      {
         a[i]=b[i];
         b[i]=0;}
      }
for (int count=k+1;count<n1;count++)
      {  int r=count+1;
       a[r]=b[count];}
for (int i=0;i<=n1;i++)
    {printf("%d,",a[i]);}
return 0;
}
                
