//Count  spaces,digits, and speical characters in a string ..
#include<stdio.h>
int main ()
{ int n;
printf("enter how char");
scanf("%d", &n);
char a[n];
int  speical=0,digit=0,alpahabat=0;
for  (int i=0;i<n;i++)
     {scanf("%c", &a[i]);}
for (int i=0;i<n;i++)
     {
      if (a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z' )
         { alpahabat++;}
     else if (a[i]>='0' && a[i]<='9')
       {digit++;}
     else  
       { speical++;}
    }
printf("special:%d digit: %d alpahabat:%d" , speical,digit,alpahabat); 
return 0;
}
           
