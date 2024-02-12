//Program to find the loweset numbe is array
#include<stdio.h>
int main()
{
 int number[] = {2,3,4,5,-1,-10,11,56};
 int i,length,loweset=number[0];
 length = sizeof(number) / sizeof(number[0]);
 for ( i = 0; i < length; i++)
 {
        //if current number is smallerr than current lowest 
    if(loweset>number[i]){
        loweset = number[i];
    }
 }
 printf("The lowest number in the array is: %d",loweset);
 
    return 0;
}