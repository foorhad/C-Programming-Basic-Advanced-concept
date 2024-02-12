#include<stdio.h>
int main()
{
    double num1, num2;
    char operator;
    printf("Enter the number1: ");
    scanf("%lf",&num1);
    printf("Enter the operator: ");
    scanf(" %c",&operator);
    printf("Enter the number2: ");
    scanf("%lf",&num2);

    if (operator == '+')
    {
        printf("%.2lf",num1 + num2);
    }
    else if (operator == '-')
    {
        printf("%.2lf",num1 - num2);
    }
    else if (operator == '*')
    {
        printf("%.2lf",num1 * num2);
    }
    else if (operator == '/')
    {
        printf("%.2lf",num1 / num2);
    }
    else{
        printf("Invalid input!");
    }
    return 0;
}