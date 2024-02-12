//Program to cereate nested structure
#include<stdio.h>
struct name{
    int x;
    int y;
};

struct complex{
    struct name comp;
    int z;
}   num1;
int main()
{
    num1.comp.x = 11;
    num1.comp.y = 15;
    num1.z = 20;

    printf("x = %d\n",num1.comp.x);
    printf("y = %d\n",num1.comp.y);
    printf("z = %d\n",num1.z);
    
    return 0;
}