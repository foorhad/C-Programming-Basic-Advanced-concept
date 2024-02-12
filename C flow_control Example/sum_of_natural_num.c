//Program to find the sum of natural number
#include<stdio.h>
int main()
{
 int number, sum = 0, i;
 printf("Enter the number: ");
 scanf("%d",&number);
 
 for (i = 1; i <= number; i++){
    sum += i;
 }
 printf("Sum of natural number %d = %d",number,sum);
    
    return 0;
}