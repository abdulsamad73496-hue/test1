#include<stdio.h>
#include<string.h>
int  main ()
{
char a[1000];
fgets(a,sizeof(a),stdin);
for (int i=0;a[i]!='\0';i++)
    {
     if(i==0|| a[i-1]==' ')
       {
       if (a[i]>='a' && a[i]<='z')
        {
        a[i]=a[i]-32;
       }
     }
    }
for (int i=0;a[i]!='\0';i++)
    {
    printf("%c", a[i]);
    }
return 0;
}
