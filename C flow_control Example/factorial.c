//Program to find the Factorial of a number
#include<stdio.h>
int main()
{
 int number,factorial = 1;
 printf("Enter the number to find factorial: ");
 scanf("%d",&number);
 for (int i = 1; i <= number; i++)
 {
    factorial *= i;
 }
 printf("Factorial of %d = %d",number,factorial);
    
    return 0;
}