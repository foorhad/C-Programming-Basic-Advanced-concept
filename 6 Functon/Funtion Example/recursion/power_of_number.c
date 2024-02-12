//Program to calculate the power of number
#include<stdio.h>
int power(int base, int exponent){
    if (exponent != 0){
       return base *power(base,exponent-1);   
    }
    else{
         return 1;         
    }    
}
int main(){
    int base, exponent;
    printf("Enter the base: ");
    scanf("%d",&base);
    printf("Enter the exponent: ");
    scanf("%d",&exponent);
    int result=power(base,exponent);
    printf("%d^%d=%d",base,exponent,result);
    return 0;
}