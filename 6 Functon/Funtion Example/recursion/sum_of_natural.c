//program to sum of natural number using recursion
#include<stdio.h>
int sumnatural(int n){
    if (n == 0)
    {
        return 0;
    }
    else{
        return n + sumnatural(n-1);
    }
    
}
int main()
{
    int num;
    printf("Enter the the positive number: ");
    scanf("%d",&num);
    int result = sumnatural(num);
    printf("Sum of %dth till = %d",num,result);

    return 0;
}