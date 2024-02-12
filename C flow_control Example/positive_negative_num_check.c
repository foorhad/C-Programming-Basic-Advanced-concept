//program to check the number positive or negative
#include<stdio.h>
int main()
{
 int number;
 printf("Enter the number: ");
 scanf("%d",&number);
 if (number >= 0)
 {
    if(number == 0){
    printf("you entered zero");}
    else{
    printf("%d is Positive number",number);
    }     
 }
 else {
    printf("%d is negative number",number);
 }
 
    return 0;
}