//program to implement  a basic calculator using switch case
#include<stdio.h>
int main()
{
int  number1,number2 ;
char op ;
float add,sub,prod,divison,mode;
printf("enter the number1:");
scanf("%d", &number1);
printf("enter the number2:");
scanf("%d" ,&number2);
printf("enter the  arithmetic sign:");
scanf(" %c", &op);
switch (op)
   {
    case '+' :
    add=number1 + number2;
    printf("%f",add);
    break ;
    case '-' :
    sub=number1-number2;
    printf("%f",sub);
    break;
    case '*' :
    prod=number1 * number2;
    printf("%f",prod);
    break;
    case '/' :
    divison=number1 / number2;
     if (number2 == 0)
       {printf("not defined");
       }
     else
       { printf("%f",divison);
       }
       break;       
      case '%' :
       mode=number1%number2;
        printf("%f",mode);
       default :
          printf("you are not given arthmatic sign :");
        } 
return 0;
}  
