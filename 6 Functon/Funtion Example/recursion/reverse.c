//Program to reverse a sentence usig recursion
#include<stdio.h>
void reverse(){
    char c;
    scanf("%c",&c);
    if (c != '\n')
    {
        reverse();
        printf("%c",c);
        
    }    
}
int main()
{
  printf("Enter the sentece: ");
  reverse();  
    return 0;
}

