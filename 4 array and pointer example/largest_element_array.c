//Program to find largest element in an array
#include<stdio.h>
int main()
{
 int ages[] = {25,18,90,102,56,48};
 int length,largest=ages[0]; 
 length = sizeof(ages) / sizeof(ages[0]);
 for (int i = 0; i < length; i++)
 {
    if (ages[i] > largest)
    {
        largest = ages[i];
    }    
 }
 printf("largest: %d",largest);
     
    return 0;
}