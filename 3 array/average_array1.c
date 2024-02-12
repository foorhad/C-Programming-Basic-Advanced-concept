//Programt to calcualte the average of defferent ages
#include<stdio.h>
int main()
{
 int ages[]={22,24,27,28,30,48,60,72,90};
 int sum=0, i,length,average;
 length = sizeof(ages) / sizeof(ages[0]);
 for ( i = 0; i < length; i++)
 {
    sum += ages[i];
 }
 average = sum / length;
 printf("Average: %d",average);
    return 0;
}