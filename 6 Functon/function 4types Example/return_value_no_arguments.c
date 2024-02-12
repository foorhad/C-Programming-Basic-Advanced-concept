/*Progam to display number is prime or not
using function No Arguments passed but return value.*/
#include<stdio.h>
int primenumber(){
    int number, flag = 0;
    printf("Enter the positive number: ");
    scanf("%d",&number);
    for (int i = 2; i <= number/2; i++)
    {
        if (number % i == 0){
           ++flag;
            break;
        }       
    }
    if (number == 0 || number == 1)
    {
        ++flag;
    }    
    return flag;
}
int main()
{
   int result = primenumber();
   if(result == 0){
    printf("Prime number");
   }
   else{
    printf("Not prime number");
   }
    return 0;
}
