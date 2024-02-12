//Check whether a number is vowe or consonent
#include<stdio.h>
int main(){
    char c;
    printf("Enter the character: ");
    scanf("%c",&c);

    if ((c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U') || (c == 'a') || 
    (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u'))
    {
        printf("%c is a vowel",c);
    }
    else{
        printf("%c is a Consonent");
    }   
    return 0;
}