//program to find the lcm of two number
#include<stdio.h>
int main()
{
 int num1, num2, hcf,lcm;
 printf("Enter the two number: ");
 scanf("%d%d",&num1,&num2);
 for (int i = 1; i <= num1 && i<=num2; i++)
 {
    if (num1%i==0 && num2%i==0)
    {
        hcf = i;
    }    
 }
 lcm = (num1 * num2) / hcf;
 printf("LCM of %d and %d = %d",num1,num2,lcm);
    
    return 0;
}