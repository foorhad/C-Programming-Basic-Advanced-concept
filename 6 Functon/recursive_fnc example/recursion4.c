//Program to calculte the sum of 1 to n:
#include<stdio.h>
int sumnumber(int n){
    if (n==0)
    {
        return 0;
    }
    else{
        return n + sumnumber(n-1); }            
}
int main()
{
 int n;
 printf("Enter the range: ");
 scanf("%d",&n);
 int result = sumnumber(n);   
 printf("sum of 1 to %d = %d",n,result);
    return 0;
}