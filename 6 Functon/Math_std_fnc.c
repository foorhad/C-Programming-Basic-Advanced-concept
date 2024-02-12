//Program to Display All standard function
//Display All Math function
#include<stdio.h>
#include<math.h> //Include math header file to use math function
int main()
{
 int num = 16;   
 printf("Square root of num = %lf\n",sqrt(num));

 int n = 27;
 printf("Cube root of num = %lf\n",cbrt(n));

 int base = 2, exponent = 3;
 printf("Power of num = %lf\n",pow(base,exponent));


    return 0;
}