//checked whether a number palindrome or not
#include<stdio.h>
int main()
{
 int number,reverse = 0,remainder, original;
 printf("Enter the number: ");
 scanf("%d",&number);
 original = number;
 while (number !=0){
    remainder = number % 10;
    reverse = reverse * 10 + remainder;
    number /= 10;
 }
 if (original == reverse){
    printf("%d is Palindrome number",original);
 }
 else{
    printf("%d isn't Palindrome number",original);
 }
     return 0;
}