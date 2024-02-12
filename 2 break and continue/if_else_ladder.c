//make the calculator using the if else ladder
#include<stdio.h>
int main()
{

 char operator;
 int num1,num2;

 if (operator == '+')
 {
    printf("%d + %d = %d",num1,num2,num1+num2);
 }
 else if (operator == '-')
 {
    printf("%d - %d = %d",num1,num2,num1-num2);
 }
 else if (operator == '*')
 {
    printf("%d * %d = %d",num1,num2,num1*num2);
 }
 else if (operator == '/')
 {
    printf("%d / %d = %d",num1,num2,num1/num2);
 }
 else{
    printf("correct! operator isn't correct");
 }
    return 0;
}