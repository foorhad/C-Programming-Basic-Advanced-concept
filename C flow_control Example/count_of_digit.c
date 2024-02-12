//Program to count of integer digit
#include<stdio.h>
int main()
{
 int number,count = 0, original;
 printf("Enter the number: ");
 scanf("%d",&number);
 original = number;
 while (number !=0)
 {
    number /= 10;
    ++count;
 }
    printf("count of %d = %d",original,count);
    return 0;
}