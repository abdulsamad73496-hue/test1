//Reverse each word in a sentence..
#include<stdio.h>
#include<string.h>
int main ()
{
int n,count=0,r=0,start=0;
printf("Enter How many char you have to input:");
scanf("%d", &n);
char  a[n+1],b[n+1];
printf("Enter the sentence :\n");
getchar();
fgets(a,sizeof(a),stdin);
for (int i=0;i<=strlen(a);i++)
    {
      if ( a[i]!=' ' && a[i]!='\n' && a[i]!='\0')
          {
           count++;
           }
      else
          {
           r=0;
          for (int k=count;k>=start;k--)
              { 
                b[r]=a[k];
	        r=r+1;
              }
          int s=0;
         for (int k=start;k<=count;k++)
              {
                a[k]=b[s];
                s=s+1;
              }
            start=count+1;
           }
      }
printf("%s",  a);
return 0;
}

              
