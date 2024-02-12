//program to count digit of a given number using recursion
#include<stdio.h>
int countdigit(int n){
    static int count = 0;
    if(n != 0){
        ++count;
        countdigit(n/10);
    }       
    return count;
}
int main()
{
 int n;
 printf("Enter the number: ");
 scanf("%d",&n);
 int result = countdigit(n);
 printf("The number of digit given number %d = %d",n,result);   
    
    return 0;
}