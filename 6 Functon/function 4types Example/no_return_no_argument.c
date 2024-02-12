/*Program to show number is Prime number or not
 using function no return type not argument*/
#include<stdio.h>
void primenumber() //function declaration
{   
    int number, flag=0;;
    printf("Enter the positive number: ");
    scanf("%d",&number);
    for (int i = 2; i <= number/2; i++)
    {
       if (number % i == 0)
       {
         ++flag;
         break;
       }       
    }
    //1 and 0 are not prime or composite 
    if (flag == 1 || number == 1 || number == 0) 
    {
        printf("%d isn't Prime number",number);
    }
    else{
        printf("%d is prime number",number);
    }        
}
int main()
{
    primenumber();    
    return 0;
}