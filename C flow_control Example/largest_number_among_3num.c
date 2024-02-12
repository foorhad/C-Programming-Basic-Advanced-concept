//Program to find the largest number among three number
#include<stdio.h>
int main()
{
 int a,b,c;
 printf("Enter the firtst number: ");
 scanf("%d",&a); 
 printf("Enter the second number: ");
 scanf("%d",&b);  
 printf("Enter the third number: ");
 scanf("%d",&c);    

 if (a>b && a>c){
    printf("%d is Largest among three number",a);
 }
 else if (b>c)
 {
    printf("%d is Largest among three number",b);
 }
 else{
    printf("%d is Largest among three number",c);
 }
 
    return 0;
}