//Program to cenvert binary to decimal number
#include<stdio.h>
#include<math.h>
int convert(long long n){
    int i=0,rem,decimal=0;
    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        decimal += rem*(pow(2,i));
        // convert(n);
        ++i;
    }
    return decimal;    
}
int main()
{
    long long number;
    printf("Enter the binary number: ");
    scanf("%lld",&number);
    int result = convert(number);
    printf("%lld in binary = %d in decimal",number,result);
    return 0;
}