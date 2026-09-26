//TOggle case
#include<stdio.h>
int main ()
{
int  n;
printf("enter how many char you have to  input:?");
scanf("%d", &n);
char a[n+1];
printf("Enter the string:\n");
getchar();
fgets(a,sizeof(a), stdin);
char  s;
for (int i=0;i<n;i++)
   {  s=a[i];
      if ( s>='A' && s<='Z')
          {  
             a[i]=a[i]+32;
           }
      else if   (s>='a' &&  s<='z')
            {   s=a[i];
              a[i]=a[i]-32;
            }
    }
printf("%s" , a);
return 0;
}
