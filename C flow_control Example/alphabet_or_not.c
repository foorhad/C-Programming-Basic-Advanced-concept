//program to check the character is Alphabet or not
#include<stdio.h>
int main(){
    char c;
    printf("Enter the character: ");
    scanf("%c",&c);
    if ((c >='A' && c<='Z') || (c >='a' && c <='z')) 
    {
        printf("%c is an Alphabet",c);
    }
    else{
        printf("Invalid! ");
    }
       
    return 0;
}
