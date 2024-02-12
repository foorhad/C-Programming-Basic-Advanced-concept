//Program to sum of Real and imagine number.
#include<stdio.h>
typedef struct {
    double real;
    double imagine;
}   complex;

int main()
{
    complex c1 ={.real = 21.8, .imagine = 30.23};
    complex c2 ={.real = 13.34, .imagine = 112.23};
   
    complex sum;

    sum.real   = c1.real + c2.real;
    sum.imagine = c1.imagine + c2.imagine;
    

    printf("Result is %.2lf + %.2lfi",sum.real, sum.imagine);

    
    return 0;
}