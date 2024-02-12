#include<stdio.h>
int main()
{
 int num1, num2,gcd=0;
 printf("Enter the number1: ");
 scanf("%d",&num1);   
 printf("Enter the number2: ");
 scanf("%d",&num2); 

 for (int i = 1; i <= num1 && i <= num2; i++)
 {
    if ((num1 % i == 0) && (num2 % i == 0))
    {
        gcd = i;
    }
    
 }
 printf("%d",gcd);
 

    return 0;
}