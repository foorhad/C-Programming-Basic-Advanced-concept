//Program to Find the GCD usnig recursion
#include<stdio.h>
int findgcd(int n1, int n2){
   if(n2 != 0){
    return findgcd(n2,n1%n2); //n1=12, n2=6, n1=6, n2=0
   }
   else{
    return n1;
   }     
}

int main()
{
 int number1, number2;
 printf("Enter the 1st positiver number: ");
 scanf("%d",&number1);   
 printf("Enter the 2nd positiver number: ");
 scanf("%d",&number2);
 int result = findgcd(number1,number2);
 printf("GCD of %d and %d is %d",number1,number2,result);
    return 0;
}