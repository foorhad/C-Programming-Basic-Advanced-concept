//Program to convert decimal to binary number
#include<stdio.h>
long long convert(int n){
    long long binary=0; 
    int rem, i=1;

    while (n != 0)
    {
        rem = n % 2;
        n /= 2;
        binary += rem * i;
        i*=10;              
    }
    return binary;   
}
int main()
{
    int number;
    long long bin;
    printf("Enter the decimal number: ");
    scanf("%d",&number);
    bin= convert(number);
    printf("%d in decimal = %lld in binary",number,bin);
    
    return 0;
}