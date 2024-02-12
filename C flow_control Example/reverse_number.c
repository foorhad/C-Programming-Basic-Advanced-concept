//Reverse a number
#include<stdio.h>
int main()
{
 int number,reverse = 0,remainder, original;
 printf("Enter the number: ");
 scanf("%d",&number);
 original = number;

 while (number !=0)
 {
    remainder = number % 10;
    reverse = reverse * 10 + remainder;
    number /= 10;
 }
   printf("Reverse of %d = %d",original,reverse);
    return 0;
}