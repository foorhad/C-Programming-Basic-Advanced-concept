//Program to convert octal to decimal
#include<stdio.h>
#include<math.h>
int convert(int n){
    int rem,decimal=0,i=0;
    while (n !=0)
    {
        rem = n % 10;
        n /= 10;
        decimal+=rem*(pow(8,i)); // 8^2x2+8^1x6+8^0x7
        ++i;
    }
    return decimal;
}
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    printf("%d in octal = %d in decimal",number,convert(number));
    
    return 0;
}