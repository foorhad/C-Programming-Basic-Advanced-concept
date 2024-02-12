//Program User defined function
#include<stdio.h>
int addnumbers(int n1, int n2){   //function definition with parameter n1,n2 
    int sum = n1 + n2;
    return sum;     //return value
}
int main()
{
 int a,b,sum;
 printf("Enter the 1st number: ");
 scanf("%d",&a);  
 printf("Enter the 2nd number: ");
 scanf("%d",&b);
 sum = addnumbers(a,b); //function call and passed argument
 printf("Sum of %d and %d = %d",a,b,sum);    
    return 0;
}