//find the tranprose of  matrix..
#include<stdio.h>
int main ()
{
int i,j;
scanf("%d%d", &i,&j);
int   a[i][j],b[j][i];
for (int l=0;l<i;l++)
     {
      for (int k=0;k<j;k++)
        {
         scanf("%d", &a[l][k]);
         }
      }
printf("tranpose  matrix:\n");
for  (int  l=0;l<j;l++)
    {
     for (int k=0;k<i;k++)
       {
        b[l][k]=a[k][l];
        printf("%d ",b[l][k]);
       }
     printf("\n");
     }
return 0;
}
