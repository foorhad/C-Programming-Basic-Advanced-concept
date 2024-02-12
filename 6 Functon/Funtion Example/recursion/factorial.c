/*Program to calculate te Factorial of numbe using recursion
factorial of n (n!) = (5!)=1*2*3*4*5 =120 */

#include<stdio.h>
int factorial(int i){
    if (i == 0)
    {
        return 1;
    }
    else{
        return i * factorial(i-1);
    }    
}
int main()
{
    int num;
    printf("Enter the the positive number: ");
    scanf("%d",&num);
    int result = factorial(num);
    printf("Factorial of %d = %d",num,result);
   
    return 0;
}