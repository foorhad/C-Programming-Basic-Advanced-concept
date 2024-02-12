//Swap numbers in the cyclic order using call by reference
#include<stdio.h>
void cyclicswap(int *a, int *b, int *c){
  int temp = *b;
  *b = *a;
  *a = *c;
  *c = temp;
   
}
int main(){
    int a = 20, b = 85, c = 15;
    printf("Before swapping:\na = %d,\nb = %d,\nc = %d\n",a,b,c);
    cyclicswap(&a,&b,&c);
    printf("After the swapping:\na = %d,\nb = %d,\nc = %d",a,b,c);
    return 0;
}