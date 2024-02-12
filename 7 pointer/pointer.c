//programs to create pointer
#include<stdio.h>
int main()
{
 int *ptr, num1, num2;
 num1 = 15;
 num2 = 20;
 ptr = &num1;
 printf("Address of pointer:  %p\n",ptr); //get address of num varialbe. 
 printf("content of pointer:  %d\n",*ptr); //get value output 15

 ptr = &num2;
 printf("Address of num2: %p\n",&num2); // get address 
 printf("value of c: %d\n",*ptr);       //get value output 20
 
    return 0;
}