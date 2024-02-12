//Program to find the hcf of two number
#include<stdio.h>
int main()
{
 int num1, num2, hcf;
 printf("Enter the two number: ");
 scanf("%d%d",&num1,&num2);
 for (int i = 1; i <= num1 && i<=num2; i++)
 {
    if (num1%i==0 && num2%i==0)
    {
        hcf = i;
    }    
 }
 printf("hcf of %d and %d = %d",num1,num2,hcf);
    
    return 0;
}