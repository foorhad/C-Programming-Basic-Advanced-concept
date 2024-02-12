//check whether a number is prime or not
#include<stdio.h>
int main()
{
 int number, flag = 0;
 printf("Enter the number: ");
 scanf("%d",&number);
 for (int i = 3; i <= number/2; i +=2){
    if (number % i == 0){
        ++flag;
        break;
    }   
 }
 if (flag == 1 || number == 0 || number == 1 ){
    printf("%d isn't Prime number",number);
 }
 else{
    printf("%d is a Prime number",number);
 }
    return 0;
}