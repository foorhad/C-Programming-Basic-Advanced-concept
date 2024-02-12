//the program given below find the specific value in array
#include<stdio.h>
int main()
{
 int arr[] = {1,2,3,4,5,6,7};
 int value;
 printf("Enter exists number in array: ");
 scanf("%d",&value);

 for (int i = 0; i < 7; i++)
 {
    if(arr[i] == value){
        printf("value is found.");}
 }   
    return 0;
}