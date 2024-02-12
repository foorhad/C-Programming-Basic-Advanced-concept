//Program to relationship between Array and Pointer
#include<stdio.h>
int main()
{
    int num[] = {1,2,3,4,5,6,7,8};
    int len = sizeof(num) / sizeof(num[0]);
    for (int i = 0; i < len; i++)
    {
        printf("address of array elements num[%d]: %p\n",i+1,&num[i]);
    }
    
    return 0;
}