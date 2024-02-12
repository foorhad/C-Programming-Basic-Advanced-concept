/*Progam to display number is prime or not
using function Arguments passed not return value.*/
#include<stdio.h>

void primenumber(int num){
        int flag = 0;
        for (int i = 2 ; i <= num/2; i++)
        {
            if (num % i == 0)
            {
                ++flag;
                break;
            }            
        }
        if (flag == 1 || num == 0 || num == 1)
        {
            printf("Not prime number");
        }
        else{
            printf("Prime number.");
        }        
}

int main()
{
 int number1;
 printf("Enter the positive number: ");
 scanf("%d",&number1); 
 primenumber(number1);   
    return 0;
}