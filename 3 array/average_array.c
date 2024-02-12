//Program to calculate the average of array.
#include<stdio.h>
int main()
{
 
 int array[10],element, sum=0,i,average;

 printf("enter the number of element: ");
 scanf("%d",&element);

 for ( i = 0; i < element; i++)
 {
    printf("Enter the %dth element: ",i);
    scanf("%d",&array[i]);
    sum+=array[i];
 }
 average = sum/element;
 printf("average of array= %d",average);
    
    return 0;
}