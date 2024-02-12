//Program to passing pointer to Function
#include<stdio.h>
void display(int *x){
    ++(*x);
}
int main()
{
 int *ptr, num=10;
 ptr = &num;
 display(ptr);

 printf("num = %d",num);
    return 0;
}