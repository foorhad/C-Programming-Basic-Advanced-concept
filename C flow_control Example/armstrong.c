//program to check the number Armstrong or not
#include<stdio.h>
int main()
{
 int number,remainder,result = 0;
 printf("Enter the number : ");
 scanf("%d",&number);
 int original = number;

 while (original != 0)
 {
    remainder = original % 10;
    result += remainder*remainder*remainder;
    original /= 10;
 }
 if (result == number)
 {







































    
    printf("Armstrong");
 }
 else{
    printf("not armstrong");
 }    
    return 0;
}