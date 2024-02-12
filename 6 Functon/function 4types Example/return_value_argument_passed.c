/*Progam to display number is prime or not
using function Arguments passed not return value.*/
#include<stdio.h>

int primenumber(int num){
    int flag = 0;
    for (int i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {   ++flag;
            break;
        }        
    }
    if (num == 0 || num == 1)
    {
        ++flag;
    }
    return flag;    
}
int main()
{
    int num, result;
    printf("Enter the positive number: ");
    scanf("%d",&num);
    result = primenumber(num); 
    if (result == 0)
    {
        printf("Prime number");
    }
    else{
        printf("Not prime number");
    }      
    return 0;
}