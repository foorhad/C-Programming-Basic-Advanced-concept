//Program to find Length of array
#include<stdio.h>
int main()
{
    int arr[] = {2,3,4,5,6,7,77};
    int Length = sizeof(arr) / sizeof(arr[0]);
    printf("Length of array: %d",Length);
    return 0;
}