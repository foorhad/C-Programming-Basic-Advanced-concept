#include<stdio.h>
int main()
{
 int x[5],sum=0,i;
 printf("Enter the 5 numbers: ");
 for ( i = 0; i < 5; i++)
 {
    scanf("%d",x+i);
    sum += *(x+i);
 }
 printf("sum = %d",sum);
    
    return 0;
}
