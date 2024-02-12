//example of another global variable
#include<stdio.h>
int result; //global variable
void addnumber(int a, int b){
    result = a + b;
    printf("sum = %d",result);
}
int main()
{
    int a = 5, b = 10;
    addnumber(a,b);
    
    return 0;
}