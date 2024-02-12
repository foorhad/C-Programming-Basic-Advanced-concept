//Program to create global varialble
#include<stdio.h>
int num  = 10;  /*Global varible. They are accessible from any function inside the program*/

void globalvar(){
    ++num;
    printf("%d",num);
}

int main()
{
    ++num;
    globalvar();  
    return 0;
}
