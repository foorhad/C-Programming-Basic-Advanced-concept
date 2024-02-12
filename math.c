#include<stdio.h>
#include<math.h>
int main()
{
    double num1 = 5, num2 = 4, num3 = 8.5;
    printf("Num1 raised to Num2 is %.1f\n",pow(num1,num2));
    printf("Square root of num2 %.1f\n",sqrt(num2));
    printf("Floor value of num3 %.1f\n",floor(num3));
    printf("Ceil value of num3 is, %.1f",ceil(num3));
    return 0;
}