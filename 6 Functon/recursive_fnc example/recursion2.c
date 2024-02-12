//Program to factorial of n number using recursion function
#include<stdio.h>

int recurfnc(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else{
        return n * recurfnc(n-1);
    }    
}
int main(){
 int num;
 printf("Enter the number: ");
 scanf("%d",&num);
 int factorial = recurfnc(num);
 printf("Factorial of %d = %d",num,factorial);   
    return 0;
}