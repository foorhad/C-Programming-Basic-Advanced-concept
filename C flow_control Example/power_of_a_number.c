//Program to calculate a power of number
#include<stdio.h>
#include<math.h>
int main()
{
    int base, exponent, result= 1;
    printf("Enter the base: ");
    scanf("%d",&base);
    printf("Enter the exponent: ");
    scanf("%d",&exponent);

    // int power =pow(base,exponent); //useing function
    // printf("%d",power);
    
    //Manual method using loop
    while (exponent != 0)
    {
        result *= base;
        --exponent;
    }
    printf("%d",result);

    return 0;
}
