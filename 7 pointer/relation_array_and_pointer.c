#include<stdio.h>
int main()
{
 int *ptr, num[] = {10,12,15,16,7,20};

        //ptr is assigned the address of 3rd element.
 ptr = &num[2]; 

 printf("*ptr= %d\n",*ptr); //content of the pointer
 printf("*(ptr+1)= %d\n",*(ptr+1)); //content of the pointer
 printf("*(ptr-1)= %d",*(ptr-1)); //content of the pointer


    return 0;
}