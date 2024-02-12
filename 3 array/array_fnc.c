//program to create pass array element to function
#include<stdio.h>
void display(int num[]){
    int sum = 0;
    for (int i =0 ; i < 5; i++)
    {
        printf("%d\n",num[i]);
        sum += num[i];
    }
    printf("sum of array element: %d",sum);
}
int main()
{
 int arr[10]={1,2,3,4,5,6};
 display(arr);

    return 0;
}