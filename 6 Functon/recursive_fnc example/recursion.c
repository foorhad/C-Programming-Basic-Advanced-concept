//Program to sum of natural number using recursion function
#include<stdio.h>
int recurfnc(int n){
    if (n == 0)
    {
        return 0;
    }
    else{
        return n + recurfnc(n-1); // (n) =n+(n-1). (6) = 6 + (6-1). 
    }    
}
int main()
{
 int num;
 printf("Enter the number: ");
 scanf("%d",&num);
 int sum = recurfnc(num);
 printf("sum = %d",sum);   
    return 0;
}
