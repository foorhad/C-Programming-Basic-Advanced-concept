//days of week using if else ladder.
#include<stdio.h>
int main()
{
 int num;
 printf("Enter the number between(1-7): ");
 scanf("%d",&num);
if (num == 1)
 {
    printf("Sunday");
 }
else if (num == 2)
 {
    printf("Monday");
 } 
else if (num == 3)
 {
    printf("Tuesday");
 }
else if (num == 4)
 {
    printf("Wednesday");
 }
else if (num == 5)
 {
    printf("Thursday");
 }
else if (num == 6)
 {
    printf("Friday");
 }
else if (num == 7)
 {
    printf("Saturday");
 }
else{
    printf("Error! wrong number input");
 }         
    return 0;
}