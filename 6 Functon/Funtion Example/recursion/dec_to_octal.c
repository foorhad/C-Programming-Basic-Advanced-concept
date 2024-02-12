//Program to convert decimal to octal 
#include<stdio.h>
int convert(int n){
    int rem,octal=0,i=1;
    while (n!=0)
    {
        rem = n % 8;
        n /= 8;
        octal += rem * i;
        i*=10;
    }
    return octal;   
}
int main()
{
  int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    printf("%d in decimal = %d in octal",number,convert(number));   
    return 0;
}