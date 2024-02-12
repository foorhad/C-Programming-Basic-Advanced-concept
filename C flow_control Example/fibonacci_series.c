//program to Display Fibonacci series
#include<stdio.h>
int main()
{
 int number, n1=0,  n2=1, n3=  n1+n2;
 printf("Enter the number of term: ");
 scanf("%d",&number);
 printf("Fibonacce series: %d, %d, ",n1,n2);
 for (int i = 1; i <= number; i++){
   printf("%d, ",n3);
   n1 = n2;
   n2 = n3;
   n3 = n1 + n2;
 }
    
   return 0;
}