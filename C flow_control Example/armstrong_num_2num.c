//Program to Armstrong number between two intervals
#include<stdio.h>
int main()
{
 int low,high,remainder;
 printf("Enter the lower bound : ");
 scanf("%d",&low);
 printf("Enter the higher bound : ");
 scanf("%d",&high);
 for (int i = low; i < high; i++)
 { 
    int result = 0;
    int original = i;
    while (original != 0)
    {
    remainder = original % 10;
    result += remainder*remainder*remainder;
    original /= 10;
    }
    if (result == i)
    {
        printf("%d, ",i);
    }   
 }
 return 0;
}
 