#include<stdio.h>
int display(int n){
    ++n;
    printf("After increse: %d\n",n);
}

int main()
{
 int num = 15;
 display(num);
 printf("num = %d",num);   
 
    return 0;
}