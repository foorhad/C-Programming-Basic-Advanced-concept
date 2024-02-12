//Program to passing addres to function
//call buy reference
#include<stdio.h>
void display(int* n){
   (*n)++;
   printf("In user funcion: %d\n",*n);

}
int main()
{
 int *ptr, num=10;   
 ptr = &num; //ptr is assigned addressces of num variable.
 display(ptr);
 printf("In Main funcion: %d",num);
    return 0;
}