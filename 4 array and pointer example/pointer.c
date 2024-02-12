//Program to Access elements of an array using pointer
#include<stdio.h>
int main()
{
 int ages[100], len, i;

 printf("Enter the number of array element: ");
 scanf("%d",&len);

 printf("Enter the Array Element: \n");
 for (i = 0; i < len; i++)
 {
    scanf("%d",ages + i);  //&ages[i] is equivalent to ages + i
 }
 
 printf("ages[%d] = {",len);
 for (int i = 0; i < len; i++)
 {
   printf("%d,  ",*(ages+i));   //ages[i] is equivalent to *(ages+i)
 }
 printf("}");
    return 0;
}