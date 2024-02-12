//Program to calculate the average of array element
#include<stdio.h>
int main()
{
    int ages[] = {20,23,44,56,70};
    int sum=0, i, length, average;
    length = sizeof(ages) / sizeof(ages[0]);
    printf("length=%d\n",length);
    for ( i = 0; i < length; i++)
    {
        sum += ages[i];
    }
    average = sum / length;
    printf("sum of array: %d\n",sum);
    printf("Average of array element: %d",average);
    

    
    return 0;
}