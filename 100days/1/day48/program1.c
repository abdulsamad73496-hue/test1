//one is rotation of other..
#include<stdio.h>
#include<string.h>
int main ()
{
char a[100],b[100];
printf("Enter the string:\n");
fgets(a,sizeof(a),stdin);
fgets(b,sizeof(b),stdin);
char c[200];
strcat(c,a);
strcat(c,b);
if (strlen(a)==strlen(b))
     {if  (strstr(c,b)!= NULL)
          {printf("Rotation");}
      else 
          {printf("Not Rotation");}
      }
else
    {
     printf("Not rotation");
     }
return 0;
}

