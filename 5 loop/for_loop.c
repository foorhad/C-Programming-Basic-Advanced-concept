//programs to calculate the sum of n natural number. such as 1+2+3+....
#include<stdio.h>
int main()
{
    int n,count,sum=0;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    for (count = 0; count < n; count++)
    {
       sum += count;
    }
    printf("Sum n natural number: %d",sum); 
    return 0;
}