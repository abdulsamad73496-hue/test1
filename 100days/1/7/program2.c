//program  to check ch  whether is vowel or consonant
#include<stdio.h>
int main()
{
char ch;
printf("enter the character:");
scanf("%ch",&ch);
if ((ch>='a' && ch<='z') || ( ch>='A' && ch <='Z'))
   { if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {printf("it is a vowel");}
     else
        {printf("it is  a consonant");}
     }
else
     {printf("it not a alphabat");}
return 0;
}
