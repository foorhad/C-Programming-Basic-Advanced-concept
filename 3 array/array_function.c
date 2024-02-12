//Program to pass individual array in function
#include<stdio.h>
void Display(int n1, int n2){
    printf("%d\n",n1);
    printf("%d\n",n2);
}

int main()
{
 int arr[] = {1,2,3,4,5};   
 Display(arr[0],arr[1]);
    return 0;
}