#include<stdio.h>
int main ()
{
int n,flag=1;
printf("Enter no char in str1:");
scanf("%d", &n);
int m;
printf("enetr no char in str2:");
scanf("%d", &m);
char a[n+1],b[m+1];
getchar();
fgets(a,sizeof(a),stdin);
getchar();
fgets(b,sizeof(b),stdin);
int c[m],d[m];
if(m==n)
 {
  for (int i=0;i<=m;i++)
     {
      c[i]=a[i];
      d[i]=b[i];
      }
   }
for (int i=0;i<m;i++)
    {for (int j=0;j<m-i-1;j++)
         {if  (c[j]>c[j+1])
             {int tem=c[j];
                  c[j]=c[j+1];
                  c[j+1]=tem;
             }
          }
    }
for (int i=0;i<m;i++)
    {for (int j=0;j<m-i-1;j++)
         {if  (d[j]>d[j+1])
             {int tem=d[j];
                  d[j]=d[j+1];
                  d[j+1]=tem;
             }
          }
    }
for (int i=0;i<=m;i++)
    {
     if(c[i]!=d[i])
       {flag=0;
        break;  
        }
    }
if (flag==1)
   {printf("Anagram");}
else 
   {printf("Not Anagram");} 
return 0;
}
