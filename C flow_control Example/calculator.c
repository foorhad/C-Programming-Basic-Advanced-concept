//Program to generate simple calculator
#include<stdio.h>
int main()
{
 char expression;
 printf("Enter the operator between(+,-,*,/): ");
 scanf("%c",&expression);
 double a,b;
 printf("Enter the 1st number: ");
 scanf("%lf",&a);
 printf("Enter the 2nd number: ");
 scanf("%lf",&b);
 switch (expression)
 {
 case '+':
    printf("%.2lf + %.lf = %.2lf",a,b,a+b);
    break;
 case '-':
    printf("%.2lf - %.lf = %.2lf",a,b,a-b);
    break;
 case '*':
    printf("%.2lf * %.lf = %.2lf",a,b,a*b);
    break;
 case '/':
    printf("%.2lf / %.lf = %.2lf",a,b,a/b);
    break;
 default:
    printf("invalid!");
    break;
 }   
    return 0;
}