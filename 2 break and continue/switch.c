//working of switch case statement.
#include<stdio.h>
int main()
{
    char expression;
    int num1,num2;
    printf("Enter the operator(+,-,*,/): ");
    scanf("%c",&expression);
    printf("\nEnter two operands: ");
    scanf("%d%d",&num1,&num2);

    switch (expression)
    {
    case '+':
        printf("%d + %d = %d",num1,num2,num1+num2);
        break;
    case '-':
        printf("%d - %d = %d",num1,num2,num1-num2);
        break;
    case '*':
        printf("%d * %d = %d",num1,num2,num1*num2);
        break;
    case '/':
        printf("%d / %d = %d",num1,num2,num1/num2);
        break;    
    default:
        printf("Error! operator isn't correct.");
        break;
    }
    return 0;
}